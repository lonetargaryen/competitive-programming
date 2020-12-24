// https://codeforces.com/problemset/problem/1430/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        stack<int> s;
        for (int i=1;i<=n;i++) s.push(i);
        vector<pair<int, int>> v(n-1);
        int iterations = n-1;
        // cout<<*--s.end();
        while (iterations--) {
            int lastVal = s.top();
            s.pop();
            int secondLastVal = s.top();
            s.pop();
            s.push(ceil((float(lastVal) + float(secondLastVal))/2));
            v[n-2-iterations] = {lastVal, secondLastVal};
        }
        cout<<s.top()<<'\n';
        for (int i=0;i<n-1;i++) cout<<v[i].first<<' '<<v[i].second<<'\n';
    }

    return 0;
}