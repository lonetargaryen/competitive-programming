// https://codeforces.com/problemset/problem/1427/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n);
        int sum = 0;
        for (int i=0;i<n;i++) {
            cin>>v[i];
            sum += v[i];
        }
        if (!sum) {
            cout<<"NO\n";
        }
        else if (sum < 0) {
            sort(v.begin(), v.end());
            cout<<"YES\n";
            for (int i=0;i<n;i++) cout<<v[i]<<' ';
            cout<<'\n';
        }
        else if (sum > 0) {
            sort(v.begin(), v.end(), greater<int>());
            cout<<"YES\n";
            for (int i=0;i<n;i++) cout<<v[i]<<' ';
            cout<<'\n';
        }
    }

    return 0;
}