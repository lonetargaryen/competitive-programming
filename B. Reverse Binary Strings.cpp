// https://codeforces.com/contest/1437/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int totalPairs = 0;
        for (int i=1;i<n;i++) {
            if (s[i]==s[i-1]) totalPairs++;
        }
        // if (oneStreak==1 && zeroStreak==1) cout<<0<<'\n';
        // else if (oneStreak==zeroStreak) cout<<oneStreak-1<<'\n';
        // else cout<<max(zeroStreak, oneStreak)-1<<'\n';
        cout<<(totalPairs + 1)/2<<'\n';
    }

    return 0;
}