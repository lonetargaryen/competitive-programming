// https://binarysearch.com/problems/Interleaved-String
#include<bits/stdc++.h>

using namespace std;

string solve(string s0, string s1) {
    int n = s0.length(), m = s1.length(), i;
    string ans = "";
    for (i=0;i<min(n, m);i++) {
        ans += s0[i];
        ans += s1[i];
    }
    if (i == n) {
        ans += s1.substr(n, (m - n));
    }
    else if (i == m) {
        ans += s0.substr(m, (n - m));
    }
    return ans;
}

int main() {
    cout<<solve("abc", "xyz")<<'\n';
    return 0;
}