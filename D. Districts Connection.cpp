// https://codeforces.com/contest/1433/problem/D
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int> v(n+1);
        for (int i=1;i<=n;i++) cin>>v[i];
        vector<pair<int, int>> coords(n-1);
        int coordsIndex = 0;
        // set<int> unvisited;
        // for (int i=1;i<=n;i++) unvisited.insert(v[i]);
        // int gangCount = unvisited.size();
        set<int> visited;
        for (int i = 1; ((i <= n) && (visited.size() != n)); i++) {
            if (visited.find(i) != visited.end()) continue;
            for (int j = 1; ((j <= n) && (visited.size() != n)); j++) {
                if (v[j] == v[i]) continue;
                if (visited.find(j) != visited.end() && visited.find(i) != visited.end()) continue;
                // if (coordsIndex>(n-2)) break;
                coords[coordsIndex] = make_pair(i, j);
                coordsIndex++;
                visited.insert(i);
                visited.insert(j);
                // if (visited.size()==n)
                // if (coordsIndex>(n-2)) break;
            }
        }
        if (coordsIndex) {
            cout<<"YES\n";
            for (int i=0;i<n-1;i++) cout<<coords[i].first<<' '<<coords[i].second<<'\n';
        }
        else {
            cout<<"NO\n";
        }
    }

    return 0;
}