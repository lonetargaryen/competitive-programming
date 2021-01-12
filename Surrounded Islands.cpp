// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

void recursiveFunction(vector<vector<int>>& matrix, int x, int y) {
    if (x < 0 || x >= matrix.size() || y < 0 || y >= matrix[0].size()) return;
    if (matrix[x][y]) {
        matrix[x][y] = 0;
        recursiveFunction(matrix, x, y-1);
        recursiveFunction(matrix, x+1, y);
        recursiveFunction(matrix, x, y+1);
        recursiveFunction(matrix, x-1, y);
    }
}

int solve(vector<vector<int>>& matrix) {
    int ans = 0, n = matrix.size(), m = matrix[0].size();
    for (int i=0;i<m;i++) {
        recursiveFunction(matrix, 0, i);
        recursiveFunction(matrix, n-1, i);
    }
    for (int i=0;i<n;i++) {
        recursiveFunction(matrix, i, 0);
        recursiveFunction(matrix, i, m-1);
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (matrix[i][j]) {
                // call recursive func
                recursiveFunction(matrix, i, j);
                ans++;
            }
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