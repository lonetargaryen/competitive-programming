// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<vector<int>>& matrix) {
    int n = matrix.size(), m = matrix[0].size();
    for (int i=0;i<n;i++) {
        for (int j=0;j<m;j++) {
            int livingNeighbours = 0, deadNeighbours = 0;
            if (i-1>=0) {
                if (j-1>=0) {
                    if (matrix[i-1][j-1]) livingNeighbours++;
                    else deadNeighbours++;
                    if (matrix[i][j-1]) livingNeighbours++;
                    else deadNeighbours++;
                    if (i+1>n) {
                        if (matrix[i+1][j-1]) livingNeighbours++;
                        else deadNeighbours++;
                    }
                }
                if (matrix[i-1][j]) livingNeighbours++;
                else deadNeighbours++;
                if (j+1<m) {
                    if (matrix[i-1][j+1]) livingNeighbours++;
                    else deadNeighbours++;
                    if (matrix[i][j+1]) livingNeighbours++;
                    else deadNeighbours++;
                    if (i+1<n) {
                        if (matrix[i+1][j+1]) livingNeighbours++;
                        else deadNeighbours++;
                    }
                }
            }
            if (i+1<n) {
                if (matrix[i+1][j]) livingNeighbours++;
                else deadNeighbours++;
            }
            if (matrix[i][j] && (livingNeighbours == 2 || livingNeighbours == 3)) matrix[i][j] = 1;
            else if (matrix[i][j] == 0 && livingNeighbours == 3) matrix[i][j] = 1;
            else matrix[i][j] = 0;
        }
    }
    return matrix;
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}