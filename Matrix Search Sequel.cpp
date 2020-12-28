// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& matrix, int target) {
    bool found = false;
    int n = matrix.size(), m = matrix[0].size();
    int i = 0, j = (m-1);
    while (!found) {
        while (matrix[i][j] < target) {
            i++;
            if (i >= n) return false;
        }
        if (i >= n) return false;
        int l = 0, r = (m-1);
        int mid = (l+r)/2;
        while (l <= r) {
            if (matrix[i][mid] < target) {
                l = mid+1;
                mid = (l+r)/2;
            }
            else if (matrix[i][mid] > target) {
                r = mid-1;
                mid = (l+r)/2;
            }
            else return true;
        }
        i++;
        if (i >= n) return false;
    }
    return false;
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    // cout<<solve(v)<<'\n';
    return 0;
}