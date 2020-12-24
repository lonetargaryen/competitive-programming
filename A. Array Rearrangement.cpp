// https://codeforces.com/contest/1445/problem/0
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,x,inp;
        cin>>n>>x;
        vector<int> a(n);
        vector<int> b(n);
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=0;i<n;i++) cin>>b[i];
        reverse(b.begin(), b.end());
        bool ok = true;
        for (int i=0;i<n;i++) {
            if (a[i] + b[i] > x) {
                ok = false;
                break;
            }
        }
        ok ? cout<<"Yes\n" : cout<<"No\n";
        // int total = 0;
        // for (int i=0;i<(2*n);i++) {
        //     cin>>inp;
        //     total += inp;
        // }
        // total <= (n*x) ? cout<<"Yes\n" : cout<<"No\n";
    }

    return 0;
}