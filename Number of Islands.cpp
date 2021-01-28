// https://binarysearch.com/problems/Interleaved-String
#include<bits/stdc++.h>

using namespace std;

void recursive(vector<vector<int>>& matrix, int x, int y) {
    if (x < 0 || x >= matrix[0].size()) return;
    if (y < 0 || y >= matrix.size()) return;
    if (!matrix[y][x]) return;
    matrix[y][x] = 0;
    recursive(matrix, x+1, y);
    recursive(matrix, x-1, y);
    recursive(matrix, x, y+1);
    recursive(matrix, x, y-1);
}

int solve(vector<vector<int>>& matrix) {
    int islandCount = 0;
    for (int i=0;i<matrix.size();i++) {
        for (int j=0;j<matrix[0].size();j++) {
            if (matrix[i][j]) {
                islandCount++;
                recursive(matrix, j, i);
            }
        }
    }
    return islandCount;
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}