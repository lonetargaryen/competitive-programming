// https://binarysearch.com/problems/List-Equality-with-Increments
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int ans = 0;
    for (int i=1;i<nums.size();i++) ans += (nums[i] - nums[0]);
    return ans;
}

int main() {
    vector<int> v = {5, 6, 2, 4, 3};
    cout<<solve(v)<<'\n';

    return 0;
}