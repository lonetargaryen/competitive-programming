#include<bits/stdc++.h>

using namespace std;

vector<int> solve(vector<vector<int>>& lists) {
    vector<int> ans;
    if (!(lists.size())) return ans;
    ans = lists[0];
    int n = lists.size();
    for (int i=1;i<n;i++) {
        for (int j=0;j<lists[i].size();j++) {
            ans.push_back(lists[i][j]);
        }
    }
    sort(ans.begin(), ans.end());
    return ans;
}

int main() {
    vector<int> ans = solve("aaab", "b");
    for (auto x: ans) cout<<x<<' ';
    cout<<'\n';
    return 0;
}