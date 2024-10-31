/*
  PROBLEM
    Word Break II
  
    Given a string s and a dictionary of strings wordDict, add spaces in s to construct a sentence where each word is a valid dictionary word. Return all such possible sentences in any order.

    Note that the same word in the dictionary may be reused multiple times in the segmentation.

    LeetCode: https://leetcode.com/problems/word-break-ii
*/

#include <iostream>
#include <vector>
#include <string>
#include <unordered_set>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        vector<string> ans;  // Store all possible sentences
        
        // Convert wordDict to set for O(1) lookup
        unordered_set<string> st(wordDict.begin(), wordDict.end());
        
        // Memoization map: index -> vector of possible sentences from that index
        unordered_map<int, vector<string>> memo;
        
        // Start recursive solution with empty sentence
        solve(ans, st, memo, s, "", 0);
        return ans;
    }

    void solve(vector<string>& ans, unordered_set<string>& st, 
               unordered_map<int,vector<string>>& memo, 
               string s, string sent, int idx) {
        // Base case: if input string is empty, we found a valid sentence
        if(s.size() == 0) {
            ans.push_back(sent);
            return;
        }

        // Try all possible prefixes of current string
        for(int i = 0; i < s.size(); i++) {
            // Extract current prefix
            string w = s.substr(0, i + 1);

            // If prefix is a valid dictionary word
            if(st.find(w) != st.end()) {
                string new_sent;

                // Construct new sentence by appending current word
                if(sent == "") {
                    new_sent = w;  // First word
                } else {
                    new_sent = sent + " " + w;  // Add space between words
                }

                // Remaining string to process
                string new_s = s.substr(i + 1);

                // Recursive call with remaining string and updated sentence
                solve(ans, st, memo, new_s, new_sent, idx + i);
            }
        }
    }
};

// Helper function to print vector of strings
void printVector(const vector<string>& vec) {
    cout << "[";
    for(int i = 0; i < vec.size(); i++) {
        cout << "\"" << vec[i] << "\"";
        if(i < vec.size() - 1) cout << ", ";
    }
    cout << "]" << endl;
}

int main() {
    // Test cases
    vector<tuple<string, vector<string>>> testCases = {
        // Format: {input string, dictionary words}
        {"catsanddog", {"cat","cats","and","sand","dog"}},
        {"pineapplepenapple", {"apple","pen","applepen","pine","pineapple"}},
        {"catsandog", {"cats","dog","sand","and","cat"}},
        {"", {"cat","dog"}},  // Empty string case
        {"a", {"b"}},         // No valid segmentation case
        {"aaaa", {"a","aa"}}, // Multiple valid segmentations case
    };

    Solution solution;

    // Process each test case
    for(int i = 0; i < testCases.size(); i++) {
        cout << "\nTest Case " << i + 1 << ":\n";
        
        // Extract input string and dictionary
        string s = get<0>(testCases[i]);
        vector<string>& dict = get<1>(testCases[i]);
        
        // Print input
        cout << "Input String: \"" << s << "\"\n";
        cout << "Dictionary: ";
        printVector(dict);
        
        // Calculate and print result
        vector<string> result = solution.wordBreak(s, dict);
        cout << "Possible Sentences: ";
        printVector(result);
        
        // Print explanation
        cout << "Explanation: ";
        if(result.empty()) {
            cout << "No valid sentence can be formed.\n";
        } else {
            cout << "Found " << result.size() << " valid sentence(s) using dictionary words.\n";
        }
    }

    return 0;
}
