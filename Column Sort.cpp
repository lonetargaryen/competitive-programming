// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    // vector<vector<int>> temp(n);
    int temp[m][n];
    // stop looking at my code it's a mess
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            temp[j][i] = (matrix[i][j]);
        }
    }
    for (int i=0;i<m;i++) sort(temp[i], temp[i] + n);
    for (int i=0;i<m;i++) {
        for (int j=0;j<n;j++) {
            matrix[j][i] = temp[i][j];
        }
    }
    return matrix;
}

int main() {
    vector<int> v = {1,5,8,3,10};
    vector<vector<int>> v1 = {{0,1}};
    // solve(v);
    v1 = solve(v1);
    // cout<<solve(v)<<'\n';
    return 0;
}