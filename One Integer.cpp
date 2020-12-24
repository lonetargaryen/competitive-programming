// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    int ans = 0;
    multiset<int, greater<int>> ms;
    for (int i=0;i<nums.size();i++) ms.emplace(nums[i]);
    while (ms.size() != 1) {
        set<int>::iterator itr = ms.end();
        --itr;
        int n1 = *itr;
        ms.erase(itr);
        itr = ms.end();
        --itr;
        int n2 = *itr;
        ms.erase(itr);
        ms.emplace(n1 + n2);
        ans += (n1 + n2);
    }
    return ans;
}

int main() {
    vector<int> v = {1,2,3,4,5};
    cout<<solve(v)<<'\n';
    return 0;
}