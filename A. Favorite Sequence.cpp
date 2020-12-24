// https://codeforces.com/contest/1462/problem/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        int i = 0;
        while (i <= (n/2)) {
            if ((i == n/2) && (n%2)) cout<<v[i]<<' ';
            else if ((i == n/2) && !(n%2)) break;
            else cout<<v[i]<<' '<<v[n-1-i]<<' ';
            i++;
        }
        cout<<'\n';
    }

    return 0;
}