#include<bits/stdc++.h>

using namespace std;

int solve(string s, int k) {
    unordered_map<string, int> m;
    int len = s.length();
    for (int i=0;i<=(len - k);i++) {
        string window = s.substr(i, k);
        m[window]++;
    }
    int ans = 0;
    for (auto x: m) {
        if (x.second > 1) ans++;
    }
    return ans;
}

int main() {
    vector<int> v = {673,673,673,673,673,673,673};
    // cout<<solve(v)<<'\n';
    return 0;
}