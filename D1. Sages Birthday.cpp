// https://codeforces.com/problemset/problem/1419/D1
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    vector<long long int> v(n);
    for (int i=0;i<n;i++) cin>>v[i];
    if (n < 3) {
        cout<<0<<'\n';
        for (int i=0;i<n;i++) cout<<v[i]<<' ';
        return 0;
    }
    sort(v.begin(), v.end());
    for (int i=0; i<n-1; i=i+2) {
        int temp = v[i];
        v[i] = v[i+1];
        v[i+1] = temp;
    }
    n%2 ? cout<<n/2<<'\n' : cout<<(n/2 - 1)<<'\n';
    for (int i=0;i<n;i++) cout<<v[i]<<' ';

    return 0;
}