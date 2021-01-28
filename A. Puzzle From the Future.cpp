// https://codeforces.com/problemset/problem/1415/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string a = "", b, d = "";
        cin>>b;
        for (int i=0;i<n;i++) {
            if (!i) {
                a += '1';
                d += ((a[i] - '0') + (b[i] - '0') + '0');
            }
            else {
                if ((b[i] - '0') + ('1' - '0') == (d[i-1] - '0')) {
                    a += '0';
                    d += b[i];
                }
                else {
                    a += '1';
                    d += ((b[i] - '0') + ('1' - '0') + '0');
                }
            }
        }
        cout<<a<<'\n';
    }

    return 0;
}