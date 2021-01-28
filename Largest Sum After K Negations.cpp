// https://binarysearch.com/problems/The-Maze-Runner
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& nums, int k) {
    if (!nums.size()) return 0;
    sort(nums.begin(), nums.end());
    int negativeCount = 0, positiveCount = 0, sum = 0;
    bool zero = false;
    for (int i=0;i<nums.size();i++) {
        if (!nums[i]) zero = true;
        else if (nums[i] < 0) negativeCount++;
        else positiveCount++;
        sum += nums[i];
    }
    if (k <= negativeCount) {
        for (int i=0;i<k;i++) {
            nums[i] *= (-1);
            sum += (2*nums[i]);
        }
    }
    else {
        for (int i=0;i<negativeCount;i++) {
            nums[i] *= (-1);
            sum += (2*nums[i]);
        }
        cout<<sum;
        if (!zero) {
            // nums[negativeCount]
            k -= negativeCount;
            if (negativeCount == nums.size()) {
                if (k%2) sum-= (nums[negativeCount-1]*2);
            }
            else if (k%2) sum -= (nums[max(negativeCount-1, 0)]*2);
        }
    }
    return sum;
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}