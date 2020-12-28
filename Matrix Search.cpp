// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>>& matrix, int n) {
    int rows = matrix.size(), cols = matrix[0].size();
    vector<int> shame;
    for (int i=0;i<rows;i++) {
        for (int j=0;j<cols;j++) {
            shame.push_back(matrix[i][j]);
        }
    }
    sort(shame.begin(), shame.end());
    return shame[n];
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    // cout<<solve(v)<<'\n';
    return 0;
}