// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

string solve(string s, int i, int j) {
    string ans = "";
    for (int x=i;x<=j;x++) {
        ans += s[x%s.length()];
    }
    return ans;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve("xr", "x")<<'\n';
    return 0;
}