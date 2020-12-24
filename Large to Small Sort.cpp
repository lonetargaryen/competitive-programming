// https://binarysearch.com/problems/Large-to-Small-Sort
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<int> ans(0);
    int n = nums.size();
    if (n == 1) return nums;
    if (n%2) {
        for (int i=0;i<=n/2;i++) {
            ans.push_back(nums[n-i-1]);
            if (n-i-1 != i) ans.push_back(nums[i]);
        }
    }
    else {
        for (int i=0;i<n/2;i++) {
            ans.push_back(nums[n-i-1]);
            ans.push_back(nums[i]);
        }
    }
    return ans;
}

int main() {
    vector<int> v = {1,2,0};
    vector<int> res = solve(v);
    for (auto x: res) cout<<x<<' ';
    cout<<'\n';

    return 0;
}