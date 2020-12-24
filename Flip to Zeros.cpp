// https://binarysearch.com/problems/Flip-to-Zeros
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    if (!nums.size()) return 0;
    int ans = 0, ptr = 0;
    while (nums[ptr] == 0) ptr++;
    for (int i = ptr;i<nums.size();i++) {
        if (nums[i] != nums[i-1]) ans++;
    }
    return ans;
}

int main() {
    // vector<string> trial = solve("()()(()())");
    // for (auto x: trial) cout<<x<<'\n';
    return 0;
}