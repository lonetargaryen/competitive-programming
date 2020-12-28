// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(string s0, string s1) {
    if (fabs(s0.length() - s1.length()) >= 2) return false;
    if (s1.length() >= s0.length()) return false;
    for (int i=0;i<s0.length();i++) {
        string temp = s0;
        s0.erase(i, 1);
        if (s0 == s1) return true;
        s0 = temp;
    }
    return false;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    cout<<solve("xr", "x")<<'\n';
    return 0;
}