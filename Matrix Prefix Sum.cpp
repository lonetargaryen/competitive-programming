// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    if (!matrix.size()) return matrix;
    int n = matrix.size(), m = matrix[0].size();
    vector<vector<int>> ans(matrix);
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int p = (i-1), q = (j-1);
            while (p >= 0) {
                ans[i][j] += matrix[p][j];
                p--;
            }
            while (q >= 0) {
                ans[i][j] += matrix[i][q];
                q--;
            }
            if (i >= 1 && j >= 1) ans[i][j] += ans[i-1][j-1];
            // if (!i && !j) continue;
            // if (j >= 1) {
            //     ans[i][j] += matrix[i][j-1];
            //     if (i >= 1) {
            //         ans[i][j] += matrix[i-1][j-1];
            //     }
            // }
            // if (i >= 1) {
            //     ans[i][j] += matrix[i-1][j];
            // }
        }
    }
    return ans;
}

int main() {
    vector<vector<int>> courses = {{},{2,0,1},{}};
    // vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(courses)<<'\n';
    return 0;
}