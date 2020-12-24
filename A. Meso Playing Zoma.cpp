// https://codeforces.com/contest/1285/problem/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin>>n;
    string s;
    cin>>s;
    int Lcount = 0, Rcount = 0;
    for (int i=0;i<n;i++) {
        if (s[i] == 'L') Lcount++;
        else if (s[i] == 'R') Rcount++;
    }
    cout<<Lcount + Rcount + 1;

    return 0;
}