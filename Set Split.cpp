// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    int sum = 0;
    for (int i=0;i<nums.size();i++) sum += nums[i];
    int leftSum = 0;
    for (int i=0;i<nums.size();i++) {
        leftSum += nums[i];
        if (leftSum == (sum-leftSum)) {
            if (nums[i] == nums[i+1]) return false;
            return true;
        }
    }
    return false;
    // int leftPtr = 0, rightPtr = nums.size()-1;
    // while (leftPtr)
}

int main() {
    vector<int> v = {-137,-215,-163,248,909,190};
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}