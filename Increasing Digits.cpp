// https://binarysearch.com/problems/Increasing-Digits
#include<bits/stdc++.h>

using namespace std;

unsigned long long int dp[10];

int fact(int n) {
    int res = 1;
    for (int i = 2; i <= n; i++)
        res = res * i;
    return res;
}

int nCr(int n, int r) {
    return fact(n) / (fact(r) * fact(n - r));
}

int solve(int n) {
    if (n>9) return 0;
    if (dp[n]) return dp[n];
    dp[9] = 1;
    for (int i=8;i>0;i--) {
        dp[i] = nCr(9, i);
    }
    return dp[n];
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        cout<<solve(n)<<'\n';
    }

    return 0;
}