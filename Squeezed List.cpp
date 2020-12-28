// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<int>& nums) {
    vector<vector<int>> ans;
    ans.push_back(nums);
    while (nums.size() != 1) {
        int currSize = nums.size();
        if (currSize == 2) {
            nums[0] += nums[1];
            nums.pop_back();
            ans.push_back(nums);
            break;
        }
        nums[1] += nums[0];
        nums[currSize-2] += nums[currSize-1];
        nums.erase(nums.begin());
        nums.pop_back();
        ans.push_back(nums);
    }
    return ans;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    solve(v);
    // cout<<solve(v, 1)<<'\n';
    return 0;
}