// https://binarysearch.com/problems/Longest-Increasing-Subsequence
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    int n = nums.size();
    if (!n) return 0;
    int dp[n];
    dp[0] = 1;
    int ans = 1;
    for (int i=1;i<n;i++) {
        int maxLength = 1;
        bool smol = false;
        for (int j=0;j<i;j++) {
            if (dp[j]>=maxLength && nums[j]<nums[i]) {
                maxLength = dp[j];
                smol = true;
            }
        }
        ((maxLength == 1) && (!smol)) ? dp[i] = 1 : dp[i] = (maxLength+1);
        if (dp[i]>ans) ans = dp[i];
    }
    return ans;
}

int main() {
    vector<int> nums = {-87,66,-50,-57,31,-30,25,-1,-36};
    cout<<solve(nums)<<'\n';

    return 0;
}
