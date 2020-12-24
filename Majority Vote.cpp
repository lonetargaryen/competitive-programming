// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    map<int, int> m;
    int n = nums.size();
    for (int i=0;i<n;i++) m[nums[i]]++;
    int ans = -1;
    for (auto x: m) {
        if (x.second > floor(float(n)/2.0)) ans = x.first;
    }
    return ans;
}

int main() {
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    // v = solve(v);
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}