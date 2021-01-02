// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& prices) {
    int n = prices.size();
    if (!n) return n;
    int dp[n+1];
    dp[1] = 0;
    dp[2] = max(dp[1], prices[1] - prices[0]);
    for (int i=3;i<=n;i++) {
        int lastOneDay = max(prices[i-1] - prices[i-2], 0);
        int lastTwoDays = max(prices[i-1] - prices[i-3], 0);
        if (i > 4) {
            lastOneDay = max(lastOneDay + dp[i-4], lastOneDay + dp[i-3]);
        }
        if (i > 3) {
            lastTwoDays += dp[i-3];
        }
        dp[i] = max(dp[i-1], max(lastOneDay, lastTwoDays));
    }
    return dp[n];
}

int main() {
    vector<int> v = {0,2,2,3};
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}