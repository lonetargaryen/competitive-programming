// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    // set<vector<int>> s;
    for (int i=1;i<intervals.size();i++) {
        if (intervals[i][0] <= intervals[i-1][0] && intervals[i][1] >= intervals[i-1][1]) return true;
        if (intervals[i][0] >= intervals[i-1][0] && intervals[i][1] <= intervals[i-1][1]) return true;
        // for (auto x: s) {
        //     if (intervals[i][0] <= x[0] && intervals[i][1] >= x[1]) return true;
        //     if (intervals[i][0] >= x[0] && intervals[i][1] <= x[1]) return true;
        // }
        // s.insert(intervals[i]);
    }
    return false;
}

int main() {
    vector<int> v = {0,2,2,3};
    // solve(v);
    // cout<<solve(v)<<'\n';
    return 0;
}