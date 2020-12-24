// https://codeforces.com/problemset/problem/1409/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int a,b;
        cin>>a>>b;
        int diff = abs(a-b);
        (diff%10 == 0) ? cout<<(diff/10) : cout<<(diff/10) + 1;
        cout<<'\n';
    }

    return 0;
}