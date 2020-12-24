#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    if (nums.size() == 1) return nums[0];
    int ans = __gcd(nums[0], nums[1]);
    for (int i=1;i<nums.size()-1;i++) {
        ans = __gcd(ans, nums[i+1]);
    }
    return ans;
}

int main() {
    vector<int> v = {673,673,673,673,673,673,673};
    cout<<solve(v)<<'\n';
    return 0;
}