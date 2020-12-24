// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& matrix) {
    if (matrix.size() == 0) return false;
    int n = matrix.size(), m = matrix[0].size();
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (!matrix[i][j]) continue;
            if (j >= 2) {
                if (i >= 1) {
                    if (matrix[i-1][j-2]) return true;
                }
                if (i+1<n) {
                    if (matrix[i+1][j-2]) return true;
                }
            }
            if (j >= 1) {
                if (i-2 >= 0) {
                    if (matrix[i-2][j-1]) return true;
                }
                if (i+2<n) {
                    if (matrix[i+2][j-1]) return true;
                }
            }
            if (j+2<m) {
                if (i>=1) {
                    if (matrix[i-1][j+2]) return true;
                }
                if (i+1<n) {
                    if (matrix[i+1][j+2]) return true;
                }
            }
            if (j+1<m) {
                if (i>=2) {
                    if (matrix[i-2][j+1]) return true;
                }
                if (i+2<n) {
                    if (matrix[i+2][j+1]) return true;
                }
            }
        }
    }
    return false;
}

int main() {
    vector<vector<int>> matrix = {{0,0,0,0,0,0},{0,0,0,1,0,0},{1,0,0,0,0,0},{0,0,0,1,0,0},{0,0,0,0,1,0},{1,1,0,0,0,0},{0,0,0,0,0,0}};
    cout<<solve(matrix)<<'\n';
    return 0;
}