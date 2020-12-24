// https://codeforces.com/problemset/problem/1415/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m,r,c;
        cin>>n>>m>>r>>c;
        cout<<max(r-1, abs(n-r)) + max(c-1, abs(m-c))<<'\n';
    }

    return 0;
}