// https://codeforces.com/contest/1285/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int> v(n);
        long long int totalSum = 0;
        for (int i=0;i<n;i++) {
            cin>>v[i];
            totalSum += v[i];
        }
        if (v[0]<0 || v[n-1]<0) {
            cout<<"NO\n";
            continue;
        }
        if (totalSum < 0) {
            cout<<"NO\n";
            continue;
        }
        long long int leftSum = 0;
        for (int i=0;i<n;i++) {
            leftSum += v[i];
            if (leftSum <= 0) break;
        }
        if (leftSum <= 0) {
            cout<<"NO\n";
            continue;
        }
        long long int rightSum = 0;
        for (int i=n-1;i>=0;i--) {
            rightSum += v[i];
            if (rightSum <= 0) break;
        }
        if (rightSum <= 0) {
            cout<<"NO\n";
            continue;
        }
        cout<<"YES\n";
    }

    return 0;
}