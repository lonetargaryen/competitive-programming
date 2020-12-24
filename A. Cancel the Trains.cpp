// https://codeforces.com/problemset/problem/1453/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int inp, a[101] = {0};
        while (n--) {
            cin>>inp;
            a[inp]++;
        }
        int cancel = 0;
        while (m--) {
            cin>>inp;
            if (a[inp]) cancel++;
        }
        cout<<cancel<<'\n';
    }

    return 0;
}