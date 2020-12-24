// https://binarysearch.com/problems/Just-Average
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums, int k) {
    int sum = 0;
    for (int i=0;i<nums.size();i++) sum += nums[i];
    for (int i=0;i<nums.size();i++) {
        int temp = sum - nums[i];
        double avg = (double(temp)/double((nums.size()-1)));
        if (avg == double(k)) return true;
    }
    return false;
}

int main() {
    vector<int> v = {0,2,-1};
    cout<<solve(v, 0)<<'\n';
    return 0;
}