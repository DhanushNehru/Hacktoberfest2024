#include <iostream>
#include <vector>
using namespace std;
int knapsack(int W, const vector<int>& weights, const vector<int>& values, int n) {
    // Create a DP table with (n+1) rows and (W+1) columns
    vector<vector<int>> dp(n + 1, vector<int>(W + 1, 0));
    for(int i=1;i<=n;i++) {
        for(int w=1;w<=W;w++) {
            if(weights[i-1] <= w)
                dp[i][w] = max(values[i-1] + dp[i-1][w - weights[i-1]], dp[i-1][w]);
            else
                dp[i][w] = dp[i-1][w];
        }
    }
    return dp[n][W];
}
int main(){
    int n, W;
    cout << "Enter the number of items: ";
    cin >> n;
    cout << "Enter the maximum weight (W): ";
    cin >> W;
    vector<int> values(n);
    vector<int> weights(n);
    cout << "Enter the values of the items: ";
    for(auto &val: values) cin >> val;
    cout << "Enter the weights of the items: ";
    for(auto &wt: weights) cin >> wt;
    cout << "Maximum value achievable: " << knapsack(W, weights, values, n) << endl;
    return 0;
}
