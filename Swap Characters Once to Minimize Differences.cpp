// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(string s, string t) {
    int ans = 0, len = s.length();
    map<char, int> m;
    for (int i=0;i<len;i++) ans += (s[i] != t[i]);
    bool onematch = false, twomatches = false;
    for (int i=0;i<len;i++) {
        if (s[i] != t[i]) {
            int msi = m[s[i]], mti = m[t[i]], matches = 0;
            m[s[i]]++;
            m[t[i]]--;
            if (msi < 0) matches++;
            if (mti > 0) matches++;
            if (matches == 2) {
                cout<<"two matches detected";
                twomatches = true;
                break;
            }
            if (matches) {
                onematch = true;
                m[s[i]]--;
                m[t[i]]++;
            }
        }
    }
    if (twomatches) return (ans - 2);
    else if (onematch) return (ans - 1);
    else return ans;
}

int main() {
    cout<<solve("aba", "cab")<<'\n';
    return 0;
}