// https://codeforces.com/contest/1454/problem/0
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        if (n%2) {
            int a[n+1];
            for (int i=1;i<=n;i++) {
                if (i%2) a[i] = min(i+1, n);
                else a[i] = i-1;
            }
            int temp = a[n/2];
            a[n/2] = a[n];
            a[n] = temp;
            for (int i=1;i<=n;i++) cout<<a[i]<<' ';
            cout<<'\n';
            continue;
        }
        else while (n) cout<<n--<<' ';
        cout<<'\n';
    }

    return 0;
}