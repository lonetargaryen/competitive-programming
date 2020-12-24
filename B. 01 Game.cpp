// https://codeforces.com/problemset/problem/1373/B
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int zeroCount = 0, oneCount = 0;
        for (int i=0;i<s.length();i++) {
            if (s[i]=='0') zeroCount++;
            else oneCount++;
        }
        if (min(zeroCount, oneCount)%2) cout<<"DA\n";
        else cout<<"NET\n";
    }

    return 0;
}