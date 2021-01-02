// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<int>& nums, int k) {
    // unordered_multiset<int> window;
    // set<int> tempset;
    map<int, int> frequencies;
    vector<int> ans;
    int n = nums.size();
    for (int i=0;i<k;i++) {
        // tempset.insert(nums[i]);
        // window.insert(nums[i]);
        frequencies[nums[i]]++;
    }
    ans.push_back(frequencies.size());
    for (int i=k;i<n;i++) {
        // int temp = window.count(nums[i]), answer = tempset.size();
        // window.insert(nums[i]);
        // if (temp != window.count(nums[i]) && !temp) answer++;
        // int temp2 = window.count(nums[i-k]);
        // window.erase(window.begin());
        // if (!window.count(nums[i-k])) answer--;
        // ans.push_back(answer);
        frequencies[nums[i]]++;
        frequencies[nums[i-k]]--;
        if (frequencies[nums[i-k]] <= 0) frequencies.erase(frequencies.find(nums[i-k]));
        ans.push_back(frequencies.size());
    }
    return ans;
}

int main() {
    vector<int> v = {0,1,0};
    v = solve(v, 1);
    // cout<<solve(v)<<'\n';
    return 0;
}