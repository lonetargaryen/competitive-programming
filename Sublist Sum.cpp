// https://binarysearch.com/problems/The-Maze-Runner
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums) {
    int total = 0;
    for (int i=0;i<nums.size();i++) total += nums[i];
    int currSum = 0;
    if (currSum > total) return true;
    for (int i=0;i<nums.size();i++) {
        currSum += nums[i];
        if (currSum < 0) currSum = 0;
        if (currSum > total) return true;
    }
    return false;
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}