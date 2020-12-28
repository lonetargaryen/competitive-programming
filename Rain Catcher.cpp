// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    int ptr = 0, totalWater = 0;
    while (nums[ptr+1] > nums[ptr]) {
        ptr++;
        if (ptr >= nums.size()) break;
    }
}

int main() {
    vector<int> v = {0,1,2,3,4};
    // Tree* tmp = solve(v);
    // cout<<solve("xyxyxz")<<'\n';
    return 0;
}