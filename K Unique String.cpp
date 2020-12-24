// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(string s, int k) {
    map<char, int> m;
    for (int i=0;i<s.length();i++) {
        m[s[i]]++;
    }
    if (k >= m.size()) return 0;
    vector<int> v(m.size());
    int i=0;
    for (auto x: m) {
        v[i] = x.second;
        i++;
    }
    sort(v.begin(), v.end());
    int ans = 0;
    for (i=0;i<v.size()-k;i++) ans += v[i];
    return ans;
}

int main() {
    cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}