// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(int n, int k) {
    int dp[n+1][k+1];
    for (int i=0;i<=k;i++) dp[0][i] = 1;
    for (int i=1;i<=n;i++) {
        for (int j=0;j<=k;j++) {
            dp[i][j] = 0;
            if (i > 0) dp[i][j] += dp[i-1][j];
            if (i > 1) dp[i][j] += dp[i-2][j];
            if (i > 2 && j > 0) dp[i][j] += dp[i-3][j-1];
        }
    }
    return dp[n][k];
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {0,0,0};
    // solve(v);
    // cout<<solve(v1, 0)<<'\n';
    return 0;
}