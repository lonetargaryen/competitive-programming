#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        if (matrix.empty()) {
            vector<int> emptyVector;
            return emptyVector;
        }
        int currentState = 1, ind = 0, currRow = 0, currCol = 0;
        int m = matrix.size(), n = matrix[0].size();
        vector<int> v(m * n);
        while (1) {
            if (currentState == 1) {
                while (currCol<n && matrix[currRow][currCol]!=-1) {
                    v[ind] = matrix[currRow][currCol];
                    matrix[currRow][currCol] = -1;
                    ind++;
                    currCol++;
                }
                currCol--;
                currRow++;
                currentState++;
            }
            else if (currentState == 2) {
                while (currRow<m && matrix[currRow][currCol]!=-1) {
                    v[ind] = matrix[currRow][currCol];
                    matrix[currRow][currCol] = -1;
                    ind++;
                    currRow++;
                }
                currRow--;
                currCol--;
                currentState++;
            }
            else if (currentState == 3) {
                while (currCol>-1 && matrix[currRow][currCol]!=-1) {
                    v[ind] = matrix[currRow][currCol];
                    matrix[currRow][currCol] = -1;
                    ind++;
                    currCol--;
                }
                currCol++;
                currRow--;
                currentState++;
            }
            else if (currentState == 4) {
                while (currRow>-1 && matrix[currRow][currCol]!=-1) {
                    v[ind] = matrix[currRow][currCol];
                    matrix[currRow][currCol] = -1;
                    ind++;
                    currRow--;
                }
                currRow++;
                currCol++;
                currentState = 1;
            }
            if (matrix[min(currRow, m-1)][min(currCol, n-1)] == -1)
                break;
	    }
        
        return v;
    }
};