// https://codeforces.com/contest/1451/problem/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int n;
        cin>>n;
        // int steps = 0;
        // for (int i=n/2;i>1;i--) {
        //     if (!(n%i)) {
        //         n /= i;
        //         steps++;
        //     }
        // }
        // steps += (n-1);
        if (n==1) cout<<0<<'\n';
        else if (n==2) cout<<1<<'\n';
        else if (n==3) cout<<2<<'\n';
        else if (n%2) cout<<3<<'\n';
        else cout<<2<<'\n';
        // cout<<steps<<'\n';
    }

    return 0;
}