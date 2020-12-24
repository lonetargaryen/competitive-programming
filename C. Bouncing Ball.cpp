// https://codeforces.com/problemset/problem/1415/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,p,k;
        cin>>n>>p>>k;
        string s;
        cin>>s;
        s = "1" + s;
        int x,y;
        cin>>x>>y;
        int dp[n+1], multiplier = 0;
        for (int i=1;i<p;i++) dp[i] = 0;
        for (int i=p;i<=n;i++) {
            if ((i == (p + (k*multiplier))) && (s[i] == '0')) {
                dp[i] = dp[i-1] + min(x, y);
                multiplier++;
            }
            else if (i == (p + (k*multiplier))) multiplier++;
            else dp[i] = dp[i-1];
        }
        cout<<dp[n]<<'\n';
    }

    return 0;
}