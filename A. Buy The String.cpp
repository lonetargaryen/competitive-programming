// https://codeforces.com/contest/1440/problem/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, c0, c1, h;
        cin>>n>>c0>>c1>>h;
        string s;
        cin>>s;
        int cost = 0;
        for (int i=0;i<n;i++) {
            if (s[i] == '0') {
                cost += min(c0, h+c1);
            }
            else {
                cost += min(c1, h+c0);
            }
        }
        cout<<cost<<'\n';
    }

    return 0;
}