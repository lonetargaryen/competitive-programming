// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9 + 7;

int solve(int n, int k) {
    unsigned long long int dp[k+1][n+1];
    for (int i=1;i<=n;i++) dp[0][i] = 1;
    for (int i=1;i<=k;i++) dp[i][1] = 2;
    for (int i=1;i<=k;i++) {
        for (int j=2;j<=n;j++) {
            if (j-i-1 <= 0) dp[i][j] = (dp[i][j-1] + dp[i-1][j-1])%mod;
            else {
                unsigned long long int sum = 0;
                for (int z=j-1;z>=(j-i-1);z--) 
                    sum = (sum + dp[i][z])%mod;
                dp[i][j] = sum;
            }
        }
    }
    return dp[k][n];
}

int main() {
    cout<<solve(6, 2)<<'\n';
    return 0;
}