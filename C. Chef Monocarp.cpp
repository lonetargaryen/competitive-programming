// https://codeforces.com/contest/1437/problem/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int q;
    cin>>q;
    while (q--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) {
            cin>>v[i];
            v[i]--;
        }
        sort(v.begin(), v.end());
        int dp[n+1][2*n];
        memset(dp, 0x3f, sizeof(dp));
        // for (int i=0;i<n;i++) for (int j=0;j<(2*n);j++) cout<<dp[i][j]<<'\n';
        dp[0][0] = 0;
        int inf = 1e9;
        for (int i=0;i<n+1;i++) {
            for (int j=0;j<(2*n)-1;j++) {
                if (dp[i][j]<inf) {
                    if (i<n) {
                        // cout<<"in\n";
                        dp[i+1][j+1] = min(dp[i+1][j+1], dp[i][j] + abs(v[i] - j));
                    }
		            dp[i][j + 1] = min(dp[i][j + 1], dp[i][j]);
                }
            }
        }
        cout<<dp[n][(2*n) - 1]<<'\n';
	}

    return 0;
}