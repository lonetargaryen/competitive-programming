// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    int ans = 0, sum = 0;
    for (int i=0;i<nums.size();i++) {
        sum += nums[i];
        if (sum < ans) ans = sum;
    }
    return ((ans*-1) + 1);
}

int main() {
    vector<vector<int>> courses = {{},{2,0,1},{}};
    // vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(courses)<<'\n';
    return 0;
}