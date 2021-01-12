// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& pieces, vector<int>& target) {
    int targetPtr = 0, n = pieces.size(), t = target.size();
    vector<int> result;
    for (int i=0;i<t;) {
        bool found = false;
        for (int j=0;j<n;j++) {
            if (!pieces[j].size()) continue;
            if (pieces[j][0] == target[i]) {
                result.insert(result.end(), pieces[j].begin(), pieces[j].end());
                i += pieces[j].size();
                found = true;
                break;
            }
        }
        if (!found) return false;
    }
    return (result == target);
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {0,0,0};
    // solve(v);
    // cout<<solve(v1, 0)<<'\n';
    return 0;
}