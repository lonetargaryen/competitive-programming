#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), k = 0;
    vector<vector<int>> ans(n);
    for (int i=n-1;i>=0;i--) {
        for(int j=0;j<n;j++) {
            ans[k].push_back(matrix[j][i]);
        }
        k++;
    }
    return ans;
}

int main() {
    // vector<int> v = {673,673,673,673,673,673,673};
    // cout<<solve(v)<<'\n';
    return 0;
}