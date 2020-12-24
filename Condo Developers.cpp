// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    vector<int> westEast;
    vector<int> northSouth;
    for (int i=0;i<n;i++) {
        int maxWestEast = matrix[i][0];
        for (int j=0;j<m;j++) {
            if (matrix[i][j] > maxWestEast) maxWestEast = matrix[i][j];
        }
        westEast.push_back(maxWestEast);
    }
    for (int i=0;i<m;i++) {
        int maxNorthSouth = matrix[0][i];
        for (int j=0;j<n;j++) {
            if (matrix[j][i] > maxNorthSouth) maxNorthSouth = matrix[j][i];
        }
        northSouth.push_back(maxNorthSouth);
    }
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            matrix[i][j] = min(westEast[i], northSouth[j]);
        }
    }
    return matrix;
}

int main() {
    vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    v = solve(v);
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}