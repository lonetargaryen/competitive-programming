// https://codeforces.com/problemset/problem/1406/A
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
        int cnt[101];
        memset(cnt, 0, sizeof(cnt));
        for (int i=0;i<n;i++) cnt[v[i]]++;
        int mexA;
        for (int i=0;i<101;i++) 
            if (cnt[i] == 0) {
                mexA = i;
                break;
            }
        int mexB;
        for (int i=0;i<101;i++) 
            if (cnt[i] <= 1) {
                mexB = i;
                break;
            }
        cout<<mexA + mexB<<'\n';
    }

    return 0;
}