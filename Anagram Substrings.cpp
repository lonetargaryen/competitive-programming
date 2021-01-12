// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(string s0, string s1) {
    unordered_map<char, int> m0;
    for (int i=0;i<s0.length();i++) ++m0[s0[i]];
    unordered_map<char, int> m1;
    for (int i=0;i<s0.length();i++) ++m1[s1[i]];
    int ans = 0;
    ans += (m0 == m1);
    for (int i = s0.length();i<s1.length();i++) {
        ++m1[s1[i]];
        if (--m1[s1[i - s0.length()]] <= 0) m1.erase(s1[i - s0.length()]);
        ans += (m0 == m1);
    }
    return ans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {-9, 9};
    // solve(v);
    cout<<solve("abc", "bcabxabc")<<'\n';
    return 0;
}