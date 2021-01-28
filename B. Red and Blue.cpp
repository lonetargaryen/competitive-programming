// https://codeforces.com/problemset/problem/1469/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> r(n);
        for (int i=0;i<n;i++) cin>>r[i];
        int m;
        cin>>m;
        vector<int> b(m);
        for (int i=0;i<m;i++) cin>>b[i];
        vector<int> rprefix(n);
        int sum = 0;
        for (int i=0;i<n;i++) {
            sum += r[i];
            rprefix[i] = sum;
        }
        sum = 0;
        vector<int> bprefix(m);
        for (int i=0;i<m;i++) {
            sum += b[i];
            bprefix[i] = sum;
        }
        int rmax = *max_element(rprefix.begin(), rprefix.end());
        int bmax = *max_element(bprefix.begin(), bprefix.end());
        cout<<max(0, (max(rmax, 0) + max(bmax, 0)))<<'\n';
    }

    return 0;
}