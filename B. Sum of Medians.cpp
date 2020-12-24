// https://codeforces.com/contest/1440/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<long long int> v((n*k) + 1);
        for (long long int i=1;i<=(n*k);i++) cin>>v[i];
        long long int currIndex = (n*k) + 1;
        unsigned long long int sum = 0;
        while (k--) {
            currIndex -= ((n/2) + 1);
            sum += v[currIndex];
        }
        cout<<sum<<'\n';
    }

    return 0;
}