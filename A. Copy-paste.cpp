// https://codeforces.com/problemset/problem/1417/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,k;
        cin>>n>>k;
        vector<int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        sort(v.begin(), v.end());
        int sum = 0;
        for (int i=1;i<n;i++) sum += ((k-v[i])/v[0]);
        cout<<sum<<'\n';
    }

    return 0;
}