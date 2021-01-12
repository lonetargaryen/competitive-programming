// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& citations) {
    sort(citations.begin(), citations.end(), greater<int>());
    if (!citations[0]) return 0;
    int ans = 1;
    for (int i=0;i<citations.size();i++) {
        if (citations[i] >= (i+1)) {
            ans = i+1;
        }
    }
    return ans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {-9, 9};
    // solve(v);
    // cout<<solve(4)<<'\n';
    return 0;
}