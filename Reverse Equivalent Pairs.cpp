// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

const int mod = 1e9+7;

unordered_map<int, int> um;

vector<int> rev(vector<int>& nums) {
    vector<int> ans(nums.size());
    for (int i=0;i<nums.size();i++) {
        if (um.count(nums[i])) {
            ans[i] = um[nums[i]];
        }
        else {
            string temp = to_string(nums[i]);
            reverse(temp.begin(), temp.end());
            ans[i] = stoi(temp);
            um[nums[i]] = ans[i];
        }
    }
    return ans;
}

int solve(vector<int>& nums) {
    um.clear();
    vector<int> reversedVector = rev(nums);
    int finalSum = 0;
    for (int i=0;i<nums.size();i++) {
        finalSum = (finalSum + 1)%mod;
        for (int j=i+1;j<nums.size();j++) {
            if (nums[i] + reversedVector[j] == nums[j] + reversedVector[i]) {
                finalSum = (finalSum + 1)%mod;
            }
        }
    }
    return finalSum;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {0,0,0};
    // solve(v);
    // cout<<solve(v1, 0)<<'\n';
    return 0;
}