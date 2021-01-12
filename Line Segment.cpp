// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& coordinates) {
    if (coordinates.size() < 3) return true;
    bool horizontal = false;
    if (!(coordinates[1][1] - coordinates[0][1])) horizontal = true;
    bool vertical = false;
    if (!(coordinates[1][0] - coordinates[0][0])) vertical = true;
    double slope = INT_MAX;
    if (!horizontal && !vertical) slope = double(coordinates[1][1] - coordinates[0][1]) / double(coordinates[1][0] - coordinates[0][0]);
    
    for (int i=1;i<coordinates.size()-1;i++) {
        if (!(coordinates[i+1][1] - coordinates[i][1])) {
            if (!horizontal) return false;
        }
        else if (!(coordinates[i+1][0] - coordinates[i][0])) {
            if (!vertical) return false;
        }
        else if (slope == INT_MAX) return false;
        else {
            double currslope = double(coordinates[i+1][1] - coordinates[i][1]) / double(coordinates[i+1][0] - coordinates[i][0]);
        if (slope != currslope) return false;
        }
    }

    return true;
}

int main() {
    vector<int> A = {2, 1, 1};
    vector<int> B = {1, 0, 2};
    vector<vector<int>> C = {{0,1}, {1, 2}};
    // solve(v);
    // cout<<solve(A, B, C)<<'\n';
    return 0;
}