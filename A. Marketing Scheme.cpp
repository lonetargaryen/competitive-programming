// https://codeforces.com/contest/1437/problem/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int l,r;
        cin>>l>>r;
        if (r>=(2*l))
            cout<<"NO\n";
        else {
            cout<<"YES\n";
        }
    }

    return 0;
}