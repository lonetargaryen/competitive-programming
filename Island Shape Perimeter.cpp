// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<vector<int>>& matrix) {
    int perimeter = 0;
    int n = matrix.size(), m = matrix[0].size();
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            if (matrix[i][j]) {
                perimeter += 4;
                if (i>=1) {
                    if (matrix[i-1][j]) perimeter--;
                }
                if (j+1<m) {
                    if (matrix[i][j+1]) perimeter--;
                }
                if (i+1<n) {
                    if (matrix[i+1][j]) perimeter--;
                }
                if (j>=1) {
                    if (matrix[i][j-1]) perimeter--;
                }
            }
        }
    }
    return perimeter;
}

int main() {
    vector<int> v = {1,1,0};
    // cout<<solve(v, 1)<<'\n';
    return 0;
}