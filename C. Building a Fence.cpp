// https://codeforces.com/problemset/problem/1472/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n, k;
        cin>>n>>k;
        vector<int> h(n);
        for (int i=0;i<n;i++) cin>>h[i];
        vector<pair<int, int>> minmax(n);
        bool ok = true;
        for (int i=0;i<n;i++) {
            if (!i) {
                minmax[i] = {h[i], h[i]};
                continue;
            }
            int lowerLimit = max(minmax[i-1].first - (k - 1), h[i]);
            int upperLimit = min(minmax[i-1].second + (k - 1), h[i] + (k - 1));
            if (lowerLimit > upperLimit) {
                ok = false;
                break;
            }
            else minmax[i] = {lowerLimit, upperLimit};
        }
        if (h[n-1] < minmax[n-1].first || h[n-1] > minmax[n-1].second) ok = false;
        ok ? cout<<"YES\n" : cout<<"NO\n";
    }

    return 0;
}