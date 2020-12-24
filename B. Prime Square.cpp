// https://codeforces.com/problemset/problem/1436/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        int primeSquare[n][n];
        // fill(&primeSquare[0][0], &primeSquare[0][0] + sizeof(primeSquare), 0);
        for (int i=0;i<n;i++) for (int j=0;j<n;j++) primeSquare[i][j] = 0;
        for (int i=0;i<n;i++) {
            primeSquare[i][i] = 1;
            primeSquare[n-i-1][i] = 1;
        }

        if (!(n%2)) {
            for (int i=0;i<n;i++) {
                for (int j=0;j<n;j++) {
                    cout<<primeSquare[i][j]<<' ';
                }
                cout<<'\n';
            }
        }
        else {
            primeSquare[n/2 + 1][n/2] = 1;
            primeSquare[n/2][n/2 + 1] = 1;
            for (int i=0;i<n;i++) {
                for (int j=0;j<n;j++) {
                    cout<<primeSquare[i][j]<<' ';
                }
                cout<<'\n';
            }
        }
    }

    return 0;
}