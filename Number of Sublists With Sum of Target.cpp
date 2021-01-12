// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int target) {
    int sum = 0, ans = 0;
    map<int, int> m;
    for (int i=0;i<nums.size();i++) {
        sum += nums[i];
        for (auto x: m) {
            if (sum - x.first == target) ans += x.second;
        }
        m[sum]++;
    }
    if (nums[0] == target) ans++;
    return ans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    cout<<solve(v1, 2)<<'\n';
    return 0;
}