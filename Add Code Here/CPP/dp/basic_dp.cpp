#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int fibonacci(int n, vector<int>& dp) {
    if(n<=1) return n;

    if(dp[n]) return dp[n];

    return dp[n] = fibonacci(n-1, dp)+fibonacci(n-2, dp);
}


int main() {
    int n;
    cin >> n;
    vector<int> dp(n+1, 0);

    cout << fibonacci(n, dp) << endl;
    return 0;
}