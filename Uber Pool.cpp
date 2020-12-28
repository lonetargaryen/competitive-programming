// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& trips, int capacity) {
    map<pair<int, int>, int> m;
    for (auto x: trips) {
        int currSum = 0;
        for (auto element: m) {
            if (x[0] >= element.first.first && x[0] < element.first.second) currSum += element.second;
        }
        currSum += x[2];
        if (currSum > capacity) return false;
        else {
            m[{x[0], x[1]}] = x[2];
        }
    }
    return true;
}

int main() {
    vector<vector<int>> v = {{1,30,2},{3,5,3},{5,9,3}};
    // Tree* tmp = solve(v);
    cout<<solve(v, 6)<<'\n';
    return 0;
}