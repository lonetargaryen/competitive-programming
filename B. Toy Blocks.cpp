// https://codeforces.com/contest/1452/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<long long int> v(n);
        for (int i=0;i<n;i++) cin>>v[i];
        long long int sum = 0, maxBlocks = 0;
        for (int i=0;i<n;i++) {
            sum += v[i];
            if (v[i]>maxBlocks) maxBlocks = v[i];
        }
        long long int blocksInEachBox = ceil(float(sum)/float(n-1));
        if (maxBlocks < blocksInEachBox) cout<<((blocksInEachBox*(n-1)) - sum)<<'\n';
        else cout<<(maxBlocks*(n-1)) - sum<<'\n';
    }

    return 0;
}