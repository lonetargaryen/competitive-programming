// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(int n) {
    vector<string> ans;
    for (int i=1;i<=n;i++) ans.push_back(to_string(i));
    sort(ans.begin(), ans.end());
    vector<int> actualans;
    for (int i=0;i<n;i++) {
        actualans.push_back(stoi(ans[i]));
    }
    return actualans;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    // cout<<solve(v1, 2)<<'\n';
    return 0;
}