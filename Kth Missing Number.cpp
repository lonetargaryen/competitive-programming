// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int k) {
    int ptr = 0, ans = 0, totalGap = 0;
    bool solved = false;
    while (ptr < (nums.size() - 1)) {
        if (totalGap == k) {
            // ptr++;
            while (ptr < nums.size() - 1) {
                while (nums[ptr] + 1 == nums[ptr+1]) {
                    ptr++;
                    if (ptr >= nums.size() - 1) break;
                }
                break;
            }
            solved = true;
            ans = nums[ptr] + 1;
            break;
        }
        while ((nums[ptr] + 1) == nums[ptr+1]) {
            ptr++;
            if (ptr >= (nums.size() - 1)) break;
        }
        if (ptr == (nums.size() - 1)) {
            ans = nums[ptr] + k + 1;
            break;
        }
        int gap = (nums[ptr+1] - nums[ptr] - 1);
        totalGap += gap;
        if (totalGap > k) {
            // ans = nums[ptr] + k + 1;
            ans = nums[ptr] + (k - (totalGap - gap) + 1);
            break;
        }
        ptr++;
    }
    if (totalGap <= k && !solved) {
        while (ptr < nums.size() - 1) {
            while (nums[ptr] + 1 == nums[ptr+1]) {
                ptr++;
                if (ptr >= nums.size() - 1) break;
            }
        }
        ans = nums[ptr] + (k - totalGap) + 1;
    }
    if (!ptr) return (nums[0] + k + 1);
    return ans;
}

int main() {
    vector<int> v = {2,4};
    vector<int> v1 = {2,3,9};
    // solve(v);
    cout<<solve(v1, 1)<<'\n';
    return 0;
}