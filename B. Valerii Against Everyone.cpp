// https://codeforces.com/contest/1438/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, inp;
        cin>>n;
        map<long long int, long long int> m;
        bool ok = false;
        while (n--) {
            cin>>inp;
            m[inp]++;
            if (m[inp] >= 2) ok = true;
        }
        ok ? cout<<"YES\n" : cout<<"NO\n";
    }
    return 0;
}