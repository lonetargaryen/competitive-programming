// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> ans;
    int ptr = 0;
    while (ptr < nums.size()) {
        int i = ptr + 1;
        while (nums[i] == nums[i-1]+1) i++;
        i--;
        vector<int> v = {nums[ptr], nums[i]};
        ans.push_back(v);
        ptr = i + 1;
    }
    return ans;
}

int main() {
    vector<int> nums = {1,3,2,7,6};
    vector<vector<int>> ans = solve(nums);
    return 0;
}