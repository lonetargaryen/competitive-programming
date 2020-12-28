// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int k) {
    int ans = (*max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()));
    auto start = nums.begin(), end = (nums.begin() + k);
    vector<int> restore(nums);
    while (end != nums.end()) {
        nums.erase(start, end);
        int currDiff = (*max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()));
        if (currDiff < ans) ans = currDiff;
        nums = restore;
        start++;
        end++;
    }
    nums.erase(start, end);
    int currDiff = (*max_element(nums.begin(), nums.end()) - *min_element(nums.begin(), nums.end()));
    if (currDiff < ans) ans = currDiff;
    return ans;
}

int main() {
    vector<int> v = {1,1,0};
    cout<<solve(v, 1)<<'\n';
    return 0;
}