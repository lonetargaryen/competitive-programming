// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& nums) {
    int lastpos = -1, n = nums.size();
    for (int i=0;i<n;i++) {
        if (nums[i] == 1) {
            if (lastpos == -1) lastpos = i;
            else if (lastpos == (i-1)) lastpos = i;
            else return false;
        }
    }
    return true;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {0,0,0};
    // solve(v);
    // cout<<solve(v1, 0)<<'\n';
    return 0;
}