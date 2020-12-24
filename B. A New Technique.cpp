// https://codeforces.com/contest/1435/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,m;
        cin>>n>>m;
        int a[n][m];
        for (int i=0;i<n;i++)
            for (int j=0;j<m;j++)
                cin>>a[i][j];
        int targetValue = a[0][0];
        int b[m][n];
        int loc;
        for (int i=0;i<m;i++)
            for (int j=0;j<n;j++) {
                cin>>b[i][j];
                if (b[i][j] == targetValue) loc = i;
            }
        for (int i=0;i<n;i++) {
            targetValue = b[loc][i];
            int newloc;
            for (newloc=0;newloc<n;newloc++) {
                if (a[newloc][0] == targetValue) break;
            }
            for (int j=0;j<m;j++)
                cout<<a[newloc][j]<<' ';
            cout<<'\n';
        }
    }

    return 0;
}