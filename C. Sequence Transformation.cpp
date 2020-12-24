// https://codeforces.com/contest/1454/problem/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
		cin>>n;
		vector<int> v(n);
		for (int i=0;i<n;i++) cin>>v[i];
		vector<int> cuts(n + 1, 1);
		n = unique(v.begin(), v.end()) - v.begin();
		v.resize(n);
		for (int i = 0; i < n; ++i) {
			cuts[v[i]] += 1;
		}
		cuts[v[0]] -= 1;
		cuts[v[n - 1]] -= 1;
		int minCuts = 1e9;
		for (int i = 0; i < n; ++i) {
			minCuts = min(minCuts, cuts[v[i]]);
		}
		cout<<minCuts<<'\n';
    }

    return 0;
}