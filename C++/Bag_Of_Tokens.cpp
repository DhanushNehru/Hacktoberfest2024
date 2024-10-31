/*
  PROBLEM
    Bag of Tokens
    
    You start with an initial power of power, an initial score of 0, and a bag of tokens given as an integer array tokens, where each tokens[i] denotes the value of tokeni.

    Your goal is to maximize the total score by strategically playing these tokens. In one move, you can play an unplayed token in one of the two ways (but not both for the same token):

    Face-up: If your current power is at least tokens[i], you may play tokeni, losing tokens[i] power and gaining 1 score.
    Face-down: If your current score is at least 1, you may play tokeni, gaining tokens[i] power and losing 1 score.
    Return the maximum possible score you can achieve after playing any number of tokens.

    LeetCode: https://leetcode.com/problems/bag-of-tokens/
*/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        // Handle edge case of single token
        if (tokens.size() == 1) {
            return tokens[0] <= power;  // Can only play face-up if power is sufficient
        }

        // Sort tokens to optimize power-score trade-offs
        // Smallest tokens first for face-up plays
        // Largest tokens last for face-down plays
        sort(tokens.begin(), tokens.end());

        int score = 0;      // Current score
        int ans = 0;        // Maximum score achieved
        int i = 0;          // Left pointer for face-up plays (smallest tokens)
        int j = tokens.size() - 1;  // Right pointer for face-down plays (largest tokens)

        while (i < j) {
            // Play face-up while we have enough power
            // Use smallest tokens to maximize remaining power
            while (i < j && tokens[i] <= power) {
                power -= tokens[i++];  // Lose token[i] power
                score++;               // Gain 1 score
                ans = max(ans, score); // Update maximum score
            }

            // If we have score to spend, trade it for power
            // Use largest tokens to maximize gained power
            if (score > 0) {
                score--;               // Lose 1 score
                power += tokens[j--];  // Gain token[j] power
            } else {
                // If no score to trade and not enough power
                // for next token, we're done
                break;
            }
        }

        // Handle last token if still have enough power
        if (i <= j && tokens[i] <= power) {
            ans = max(ans, score + 1);
        }

        return ans;
    }
};

int main() {
    // Test cases
    vector<pair<vector<int>, int>> testCases = {
        // Format: {tokens array, initial power}
        {{100}, 50},                      // Single token case
        {{100,200,300,400}, 200},        // Example 1
        {{200,100}, 150},                // Example 2
        {{100,200,300,400}, 50},         // Low initial power
        {{}, 100},                       // Empty tokens array
        {{100,200,300,400}, 1000},       // High initial power
        {{50,100,150,200}, 150}          // Multiple possible trades
    };

    Solution solution;

    // Process each test case
    for (int i = 0; i < testCases.size(); i++) {
        cout << "\nTest Case " << i + 1 << ":\n";
        
        // Print input
        cout << "Initial Power: " << testCases[i].second << "\n";
        cout << "Tokens: ";
        for (int token : testCases[i].first) {
            cout << token << " ";
        }
        cout << "\n";

        // Calculate and print result
        int maxScore = solution.bagOfTokensScore(testCases[i].first, testCases[i].second);
        cout << "Maximum Possible Score: " << maxScore << "\n";

        // Print explanation for better understanding
        cout << "Explanation: ";
        if (testCases[i].first.empty()) {
            cout << "Empty token array, no plays possible.\n";
        } else if (testCases[i].first.size() == 1) {
            cout << "Single token case - can only play face-up if power is sufficient.\n";
        } else {
            cout << "Can play tokens optimally by using smallest tokens face-up "
                 << "and largest tokens face-down.\n";
        }
    }

    return 0;
}
