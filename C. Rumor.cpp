// https://codeforces.com/problemset/problem/893/C
#include<bits/stdc++.h>

using namespace std;

class DSU {

    public:
    vector<long long int> parentVector = vector<long long int>(100001);
    vector<long long int> sizeVector = vector<long long int>(100001);

    // DSU(int n) {
    //     parentVector = vector<int> temp(n);
    //     sizeVector = vector<int> temp2(n);
    // }
    void makeSet(long long int n) {
        parentVector[n] = n;
        sizeVector[n] = 1;
    }

    // get parent node with path compression
    long long int findSet(long long int n) {
        if (n==parentVector[n]) return n;
        parentVector[n] = findSet(parentVector[n]);
        return parentVector[n];
    }

    // union by size, not rank
    void unionSet(long long int a, long long int b) {
        a = findSet(a);
        b = findSet(b);
        if (a!=b) {
            if (sizeVector[a]<sizeVector[b]) {
                a = a ^ b;
                b = a ^ b;
                a = a ^ b;
            }
            parentVector[b] = a;
            sizeVector[a] += sizeVector[b];
        }
    }
};

int main() {
    DSU dsu;
    map<long long int, long long int> finalMap;
    int n,m;
    cin>>n>>m;
    vector<long long int> v(n+1);
    for (int i=1;i<=n;i++) {
        cin>>v[i];
        dsu.makeSet(i);
    }
    int inp1, inp2;
    for (int i=0;i<m;i++) {
        cin>>inp1>>inp2;
        dsu.unionSet(inp1, inp2);
    }
    for (int i=1;i<=n;i++) {
        dsu.parentVector[i] = dsu.findSet(i);
        if (finalMap.count(dsu.parentVector[i])) {
            finalMap[dsu.parentVector[i]] = min(finalMap[dsu.parentVector[i]], v[i]);
        }
        else {
            finalMap[dsu.parentVector[i]] = v[i];
        }
    }
    long long int minGold = 0;
    for (auto x: finalMap) minGold += x.second;
    cout<<minGold<<'\n';

    return 0;
}