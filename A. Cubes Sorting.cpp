// https://codeforces.com/problemset/problem/1420/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        long long int currElement = v[0];
        bool ok = false;
        for (int i=1;i<n;i++) {
            if (v[i] >= currElement) ok = true;
            currElement = v[i];
        }
        ok ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}