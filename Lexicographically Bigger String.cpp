// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(string s, string t) {
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    bool ascending = (s[0] > t[0]);
    bool one = true, two = true;
    for (int i=0;i<s.length();i++) {
        if (!(s[i] >= t[i])) one = false;
    }
    for (int i=0;i<s.length();i++) {
        if (!(s[i] <= t[i])) two = false;
    }
    return (one || two);
}

int main() {
    vector<vector<int>> courses = {{},{2,0,1},{}};
    // vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(courses)<<'\n';
    return 0;
}