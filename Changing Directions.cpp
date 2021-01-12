// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    if (nums.size() == 0 || nums.size() == 1) return 0;
    string slope;
    if (nums[1] > nums[0]) slope = "positive";
    else if (nums[1] == nums[0]) slope = "neutral";
    else slope = "negative";
    int ans = 0;
    for (int i=1;i<nums.size()-1;i++) {
        if (nums[i+1] < nums[i]) {
            if (slope == "positive") ans++;
            slope = "negative";
        }
        if (nums[i+1] > nums[i]) {
            if (slope == "negative") ans++;
            slope = "positive";
        }
        if (nums[i+1] == nums[i]) slope = "neutral";
    }
    return ans;
}

int main() {
    vector<int> A = {2, 1, 1};
    vector<int> B = {1, 0, 2};
    vector<vector<int>> C = {{0,1}, {1, 2}};
    // solve(v);
    // cout<<solve(A, B, C)<<'\n';
    return 0;
}