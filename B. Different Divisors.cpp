// https://codeforces.com/contest/1474/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int d;
        cin>>d;
        int d2 = (1 + d);
        int d3 = (d2 + d);
        cout<<d2*d3<<'\n';
    }

    return 0;
}