// https://codeforces.com/contest/1433/problem/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int x;
        cin>>x;
        int base = ((x%10)-1)*10;
        int overhead = 0;
        for (int i=1;x!=0;i++) {
            overhead += i;
            x /= 10;
        }
        cout<<base+overhead<<'\n';
    }

    return 0;
}