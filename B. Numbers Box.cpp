// https://codeforces.com/problemset/problem/1447/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, m;
        cin>>n>>m;
        vector<int> v(n*m);
        for (int i=0;i<n*m;i++) cin>>v[i];
        int sum = 0, negativeCount = 0;
        bool zeroPresent = false;
        for (int i=0;i<n*m;i++) {
            if (v[i] < 0) negativeCount++;
            if (v[i]==0) zeroPresent = true;
            sum += abs(v[i]);
            v[i] = abs(v[i]);
        }
        if (zeroPresent) cout<<sum<<'\n';
        else {
            sort(v.begin(), v.end());
            if (negativeCount%2) sum -= 2*abs(v[0]);
            cout<<sum<<'\n';
        }

        // int a[n][m];
        // for (int i=0;i<n;i++) for (int j=0;j<m;j++) cin>>a[i][j];
        // int negativeCount = 0, x = 0;
        // vector<int> v(n*m);
        // for (int i=0;i<n;i++) {
        //     for (int j=0;j<m;j++) {
        //         v[x] = abs(a[i][j]);
        //         x++;
        //         if (a[i][j] < 0) {
        //             if (i-1>=0) {
        //                 if (a[i-1][j] <= 0) {
        //                     a[i][j] = -a[i][j];
        //                     a[i-1][j] = -a[i-1][j];
        //                     continue;
        //                 }
        //             }
        //             if (j+1<m) {
        //                 if (a[i][j+1] <= 0) {
        //                     a[i][j] = -a[i][j];
        //                     a[i][j+1] = -a[i][j+1];
        //                     continue;
        //                 }
        //             }
        //             if (i+1<n) {
        //                 if (a[i+1][j] <= 0) {
        //                     a[i][j] = -a[i][j];
        //                     a[i+1][j] = -a[i+1][j];
        //                     continue;
        //                 }
        //             }
        //             if (j-1>=0) {
        //                 if (a[i][j-1] <= 0) {
        //                     a[i][j] = -a[i][j];
        //                     a[i][j-1] = -a[i][j-1];
        //                     continue;
        //                 }
        //             }
        //             negativeCount++;
        //         }
        //     }
        // }
        // sort(v.begin(), v.end());
        // int sum = 0;
        // for (int i=0;i<negativeCount;i++) sum += (-v[i]);
        // for (int i=negativeCount;i<(n*m);i++) sum += v[i];
        // cout<<sum<<'\n';
    }

    return 0;
}