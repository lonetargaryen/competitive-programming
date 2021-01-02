// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums) {
    int sum = INT_MIN, curr = 0;
    for (int i=0;i<nums.size();i++) {
        if (nums[i] > 0 && curr < 0) curr = 0;
        curr += nums[i];
        // if (curr < 0) curr = 0;
        if (curr > sum) sum = curr;
    }
    return sum;
}

int main() {
    vector<int> v = {-137,-215,-163,248,909,190};
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}