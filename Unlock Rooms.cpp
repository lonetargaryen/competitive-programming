// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<vector<int>>& rooms) {
    int roomCount = rooms.size();
    if (roomCount == 1) return true;
    set<int> visitedRooms;
    visitedRooms.insert(0);
    for (int i=0;i<rooms[0].size();i++) visitedRooms.insert(rooms[0][i]);
    for (int i=1;i<rooms.size();i++) {
        if (!visitedRooms.count(i)) continue;
        int x = rooms[i].size();
        for (int j=0;j<x;j++) visitedRooms.insert(rooms[i][j]);
        if (visitedRooms.size() == roomCount) return true;
    }
    return false;
}

int main() {
    // cout<<solve("NT")<<'\n';
    return 0;
}