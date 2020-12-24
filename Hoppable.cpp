// https://binarysearch.com/problems/Hoppable
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums) {
    bool dp[nums.size()] = {0};
    dp[0] = true;
    for (int i=0;i<nums.size();i++) {
        if (!dp[i]) continue;
        for (int j=i+1;j<=nums[i]+i;j++) 
            if (j<nums.size())
                dp[j] = true;
    }
    return dp[nums.size()-1];
}

int main() {
    vector<int> nums = {0,1};
    cout<<solve(nums)<<'\n';

    return 0;
}
