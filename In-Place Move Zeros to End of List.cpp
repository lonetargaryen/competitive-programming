// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


vector<int> solve(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n);
    int ptr = 0;
    for (int i=0;i<n;i++) {
        if (nums[i]) {
            ans[ptr] = nums[i];
            ptr++;
        }
    }
    for (;ptr<n;ptr++) ans[ptr] = 0;
    return ans;
}

int main() {
    // cout<<solve("((()")<<'\n';
    return 0;
}