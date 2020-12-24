// https://codeforces.com/contest/1435/problem/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, input1, input2;
        cin>>n;
        int a[n+1];
        for (int i=1;i<=n;i=i+2) {
            cin>>input1>>input2;
            a[i] = -input2;
            a[i+1] = input1;
        }
        for (int i=1;i<=n;i++) cout<<a[i]<<' ';
        cout<<'\n';
    }
    return 0;
}