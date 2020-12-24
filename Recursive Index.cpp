// https://binarysearch.com/problems/Recursive-Index
#include<bits/stdc++.h>

using namespace std;

int recursive(vector<int>& nums, int k, int s) {
    if (k >= nums.size()) return 0;
    if (s >= nums.size()) return -1;
    int ans = recursive(nums, nums[k], s+1);
    if (ans == -1) return -1;
    else return (1 + ans);
}

int solve(vector<int>& nums, int k) {
    return recursive(nums, k, 0);
}

int main() {
    vector<int> v = {4,2,1,1,1};
    cout<<solve(v, 3)<<'\n';

    return 0;
}