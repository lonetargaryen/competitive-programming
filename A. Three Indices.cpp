// https://codeforces.com/problemset/problem/1380/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int> v(n+1);
        for (int i=1;i<=n;i++) cin>>v[i];
        bool ok = false;
        for (int i=2;i<n;i++) {
            if (v[i]>v[i-1] && v[i]>v[i+1]) {
                ok = true;
                cout<<"YES\n"<<i-1<<' '<<i<<' '<<i+1<<'\n';
                break;
            }
        }
        if (!ok) cout<<"NO\n";
    }

    return 0;
}