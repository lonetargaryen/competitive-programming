// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>& nums) {
    vector<int> even;
    vector<int> odd;
    for (int i = 0;i<nums.size();i++) {
        if (nums[i]%2) odd.push_back(nums[i]);
        else even.push_back(nums[i]);
    }
    sort(even.begin(), even.end());
    sort(odd.begin(), odd.end(), greater<int>());
    int ev = 0, od = 0;
    for (int i = 0;i<nums.size();i++) {
        if (nums[i]%2) {
            nums[i] = odd[od];
            od++;
        }
        else {
            nums[i] = even[ev];
            ev++;
        }
    }
    return nums;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}