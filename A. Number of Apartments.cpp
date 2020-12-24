// https://codeforces.com/problemset/problem/1430/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if ((n==1) || (n==2) || (n==4)) cout<<-1<<'\n';
        else if (!((n-5)%3)) {
            cout<<(n-5)/3<<' '<<1<<' '<<0<<'\n';
        }
        else if (!((n-7)%3)) {
            cout<<(n-7)/3<<' '<<0<<' '<<1<<'\n';
        }
        else {
            cout<<n/3<<' '<<0<<' '<<0<<'\n';
        }
    }

    return 0;
}