// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums) {
    unordered_map<int, int> m;
    for (int i=0;i<nums.size();i++) m[nums[i]]++;
    unordered_set<int> occurrences;
    for (auto x: m) {
        if (occurrences.count(x.second)) return false;
        occurrences.insert(x.second);
    }
    return true;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    // cout<<solve(v1, 2)<<'\n';
    return 0;
}