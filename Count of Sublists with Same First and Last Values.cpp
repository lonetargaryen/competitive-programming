// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    map<int, int> m;
    int ans = 0;
    for (int i=0;i<nums.size();i++) {
        ans++;
        m[nums[i]]++;
        if (m[nums[i]] > 1) ans += (m[nums[i]]-1);
    }
    return ans;
}

int main() {
    vector<int> v = {1,1,4,1};
    cout<<solve(v)<<'\n';
    return 0;
}