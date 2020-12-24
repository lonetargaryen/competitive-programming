// https://codeforces.com/contest/1451/problem/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n,q;
        cin>>n>>q;
        string s;
        cin>>s;
        while (q--) {
            int l,r;
            cin>>l>>r;
            string substring = s.substr(l-1, r-l+1);
            // cout<<substring<<'\n';
            int subPointer = 0, prevPointer = -1;
            bool noncontiguous = false;
            for (int i=0;i<s.length();i++) {
                if (s[i]==substring[subPointer]) {
                    if ((subPointer==(r-l)) && (!noncontiguous) && (i<(n-1) && (prevPointer==(i-1)))) continue;
                    subPointer++;
                    if (prevPointer!=-1) {
                        if (i > (prevPointer+1)) noncontiguous = true;
                    }
                    prevPointer = i;
                    if (subPointer > (r-l)) break;
                }
            }
            if ((subPointer==(r-l+1)) && noncontiguous) cout<<"YES\n";
            else cout<<"NO\n";
        }
    }

    return 0;
}