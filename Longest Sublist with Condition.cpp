#include<bits/stdc++.h>
using namespace std;

int solve(vector<int>& nums) {
    multiset<int> m;
    int start = 0, ans = 0;
    int n = nums.size();
    for (int i = 0; i < n; i++) {
        m.insert(nums[i]);
        while (start < n and !m.empty() and *m.rbegin() - *m.begin() * 2 >= 0) {
            m.erase(m.find(nums[start++]));
        }
        ans = max(ans, i - start + 1);
    }
    return ans;
}

int main() {
    vector<int> v {9, 1, 5, 5, 3, 3};
    cout<<solve(v);

    return 0;
}