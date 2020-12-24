// https://codeforces.com/contest/1450/problem/B
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
        string s1 = "";
        int currchar = 0;
        for (int i=0;i<n;i++) {
            s1 += s[i + currchar];
            currchar++;
        }
        cout<<s1<<'\n';
    }

    return 0;
}