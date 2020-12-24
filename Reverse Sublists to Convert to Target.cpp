// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums, vector<int>& target) {
    if (nums.size() != target.size()) return false;
    map<int, int> m1;
    map<int, int> m2;
    for (int i=0;i<nums.size();i++) m1[nums[i]]++;
    for (int i=0;i<target.size();i++) m2[target[i]]++;
    return (m1 == m2);
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}