// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>>& intervals) {
    map<int, int> m;
    for (int i=0;i<intervals.size();i++) {
        m[intervals[i][0]]++;
        m[intervals[i][1]]--;
    }
    int curr = 0, ans = 0;
    for (auto x: m) {
        curr += x.second;
        if (curr > ans) ans = curr;
    }
    return ans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    cout<<solve(v1, 2)<<'\n';
    return 0;
}