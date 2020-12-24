// https://codeforces.com/problemset/problem/1373/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        long long int a,b,c;
        cin>>a>>b>>c;
        long long int retail = -1, bulk = -1;
        if (a < c) {
            retail = 1;
            if (c < (b*a)) bulk = b;
        }
        else bulk = b;

        cout<<retail<<' '<<bulk<<'\n';
    }

    return 0;
}