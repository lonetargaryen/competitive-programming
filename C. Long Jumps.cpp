// https://codeforces.com/problemset/problem/1472/C
#include<bits/stdc++.h>

using namespace std;

int recursive(vector<int>& v, vector<int>& dp, int sum, int x) {
    if (x >= v.size()) return sum;
    if (dp[x] != -1) return dp[x];
    else return dp[x] = recursive(v, dp, sum + v[x], x + v[x]);
}

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        vector<int> dp(n, -1);
        int maxPrice = INT_MIN;
        for (int i=0;i<n;i++) {
            int currScore = recursive(v, dp, 0, i);
            if (currScore > maxPrice) maxPrice = currScore;
        }

        cout<<maxPrice<<'\n';
    }

    return 0;
}