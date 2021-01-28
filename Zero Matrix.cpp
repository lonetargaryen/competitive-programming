// https://binarysearch.com/problems/Interleaved-String
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    unordered_set<int> rows;
    unordered_set<int> cols;
    int n = matrix.size(), m = matrix[0].size();
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (!matrix[i][j]) {
                rows.insert(i);
                cols.insert(j);
            }
        }
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (rows.count(i) || cols.count(j)) matrix[i][j] = 0;
        }
    }
    return matrix;
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}