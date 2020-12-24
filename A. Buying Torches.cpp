// https://codeforces.com/problemset/problem/1418/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        unsigned long long int x,y,k;
        cin>>x>>y>>k;
        cout<<(((k*(y+1) - 1) + x - 2)/(x-1)) + k<<'\n';
    }

    return 0;
}