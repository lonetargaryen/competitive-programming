// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    for (int i=1;i<nums.size()-1;i++) if (nums[i] != nums[i-1] && nums[i] != nums[i+1]) return nums[i];
    return nums[0];
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,2,2,9,5,5,5};
    // solve(v);
    cout<<solve(v1)<<'\n';
    return 0;
}