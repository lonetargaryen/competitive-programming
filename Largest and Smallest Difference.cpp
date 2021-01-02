// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int k) {
    sort(nums.begin(), nums.end());
    int minDiff = (*nums.rbegin() - *nums.begin());
    int ptr1 = 0, ptr2 = (k - 1);
    while (ptr2 < nums.size()) {
        int currDiff = (nums[ptr2] - nums[ptr1]);
        if (currDiff < minDiff) minDiff = currDiff;
        ptr1++;
        ptr2++;
    }
    return minDiff;
}

int main() {
    vector<vector<int>> courses = {{},{2,0,1},{}};
    // vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(courses)<<'\n';
    return 0;
}