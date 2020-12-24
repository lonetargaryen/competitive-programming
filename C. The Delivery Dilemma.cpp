// https://codeforces.com/contest/1443/problem/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
         
        vector<long long int> a(n);
        vector<long long int> b(n);
        for (int i=0;i<n;i++) cin>>a[i];
        for (int i=0;i<n;i++) cin>>b[i];
		long long int totalTravelTime = 0;
		for (int i=0;i<n;i++) totalTravelTime += b[i];

        multimap<long long int, long long int> m;
        for (int i=0;i<n;i++) m.insert({a[i], b[i]});

        long long int finalAnswer = totalTravelTime;
		for (auto x: m) {
			totalTravelTime -= x.second; 
			finalAnswer = min(finalAnswer, max(x.first, totalTravelTime));
		}
		cout<<finalAnswer<<'\n';
    }

    return 0;
}