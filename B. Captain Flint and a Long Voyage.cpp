// https://codeforces.com/problemset/problem/1388/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int eightLength = ceil(float(n)/4.0);
        string nines(n - eightLength, '9');
        string eights(eightLength, '8');
        cout<<nines + eights<<'\n';
    }

    return 0;
}