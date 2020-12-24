// https://binarysearch.com/problems/Ugly-Number-Sequel
#include<bits/stdc++.h>

using namespace std;

int solve(int n) {
    int dp[n+2] = {0};
    dp[1] = 1;
    int twoP = 1, threeP = 1, fiveP = 1;
    for (int i=2;i<=n+1;i++) {
        int twoM = dp[twoP]*2;
        int threeM = dp[threeP]*3;
        int fiveM = dp[fiveP]*5;
        dp[i] = min(twoM, min(threeM, fiveM));
        if (dp[i]==twoM) twoP++;
        if (dp[i]==threeM) threeP++;
        if (dp[i]==fiveM) fiveP++;
    }
    return dp[n+1];
}

int main() {
    cout<<solve(9)<<'\n';

    return 0;
}