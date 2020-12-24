// https://codeforces.com/problemset/problem/1430/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<long long int> v(n+1);
        for (int i=1;i<=n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        int ptr = n-1;
        while (k--) {
            v[n] += v[ptr];
            ptr--;
        }
        cout<<v[n]-v[0]<<'\n';
    }

    return 0;
}