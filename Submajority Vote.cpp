// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>& nums) {
    unordered_map<int, int> m;
    int n = nums.size();
    for (int i=0;i<n;i++) ++m[nums[i]];
    vector<int> ans;
    for (auto x: m) {
        if (x.second > floor((float)n/3.0)) ans.push_back(x.first);
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {-9, 9};
    // solve(v);
    // cout<<solve(4)<<'\n';
    return 0;
}