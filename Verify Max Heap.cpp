// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums) {
    bool ok = true;
    for (int i=0;i<nums.size();i++) {
        if (((2*i) + 1) < nums.size()) if (nums[((2*i) + 1)] > nums[i]) {
            ok = false;
            break;
        }
        if (((2*i) + 2) < nums.size()) if (nums[((2*i) + 2)] > nums[i]) {
            ok = false;
            break;
        }
    }
    return ok;
}

int main() {
    vector<int> v = {0,2,2,3};
    // solve(v);
    // cout<<solve(v)<<'\n';
    return 0;
}