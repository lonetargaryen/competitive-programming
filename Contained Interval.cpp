// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& intervals) {
    for (int i=0;i<intervals.size();i++) {
        for (int j=i+1;j<intervals.size();j++) {
            if (intervals[j][0] >= intervals[i][0] && intervals[j][1] <= intervals[i][1]) return true;
            if (intervals[j][0] <= intervals[i][0] && intervals[j][1] >= intervals[i][1]) return true;
        }
    }
    return false;
}

int main() {
    vector<int> v = {0,2,2,3};
    // solve(v);
    // cout<<solve(v)<<'\n';
    return 0;
}