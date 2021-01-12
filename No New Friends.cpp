// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(int n, vector<vector<int>>& friends) {
    set<int> friendSet;
    for (int i=0;i<friends.size();i++) {
        friendSet.insert(friends[i][0]);
        friendSet.insert(friends[i][1]);
    }
    return (friendSet.size() == n);
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    // cout<<solve(v1, 2)<<'\n';
    return 0;
}