// https://codeforces.com/contest/1433/problem/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> v(n+1);
        for (int i=1;i<=n;i++) cin>>v[i];
        int dominantPiranha = 0, maxSize = 0;
        for (int i=1;i<=n;i++) {
            if (v[i]>maxSize && ((v[max(i-1, 1)]<v[i]) || (v[min(i+1, n)]<v[i]))) {
                maxSize = v[i];
                dominantPiranha = i;
            }
        }
        dominantPiranha ? cout<<dominantPiranha<<'\n' : cout<<-1<<'\n';
    }

    return 0;
}