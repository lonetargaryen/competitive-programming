// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<string>& words) {
    for (int i=0;i<words.size();i++) sort(words[i].begin(), words[i].end());
    unordered_map<string, int> um;
    int ans = 0;
    for (int i=0;i<words.size();i++) {
        um[words[i]]++;
        if (um[words[i]] > ans) ans = um[words[i]];
    }
    return ans;
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    cout<<solve(v)<<'\n';
    return 0;
}