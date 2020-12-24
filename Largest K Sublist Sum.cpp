// https://binarysearch.com/problems/Largest-K-Sublist-Sum
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int k) {
    if (!k || !(nums.size())) return 0;
    int maxSum = 0, start = 0, n = nums.size(), total = 0;
    for (int i=0;i<nums.size();i++) total += nums[i];
    if (k==1) {
        total = 0;
        for (int i=0;i<nums.size();i++) {
            total += nums[i];
            if (total > maxSum) maxSum = total;
            if (total < 0) total = 0;
        }
        return maxSum;
    }
    if (total<0) {
        auto old_count = nums.size();
        nums.resize(2 * old_count);
        std::copy_n(nums.begin(), old_count, nums.begin() + old_count);
        total = 0;
        for (int i=0;i<nums.size();i++) {
            total += nums[i];
            if (total > maxSum) maxSum = total;
            if (total < 0) total = 0;
        }
        return maxSum;
    }
    else {
        int temp = total;
        auto old_count = nums.size();
        nums.resize(2 * old_count);
        std::copy_n(nums.begin(), old_count, nums.begin() + old_count);
        total = 0;
        for (int i=0;i<nums.size();i++) {
            total += nums[i];
            if (total > maxSum) maxSum = total;
            if (total < 0) total = 0;
        }
        return (maxSum + (k-2)*temp);

    }
}

int main() {
    vector<int> v={10,1};
    cout<<solve(v, 1)<<'\n';

    return 0;
}