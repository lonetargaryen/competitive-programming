// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(string dictionary, string s) {
    if (s.length() <= 1) return true;
    map<char, int> m;
    for (int i=0;i<dictionary.length();i++) m[dictionary[i]] = i;
    int maxIndex = 0;
    for (int i=0;i<s.length();i++) {
        if (m.count(s[i])) {
            if (m[s[i]] == maxIndex) continue;
            if (m[s[i]] > maxIndex) maxIndex = m[s[i]];
            else return false;
        }
    }
   return true;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {0,0,0};
    // solve(v);
    cout<<solve("jugm", "xuaccfikwwjyz")<<'\n';
    return 0;
}