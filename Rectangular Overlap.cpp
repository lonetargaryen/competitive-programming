// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& rect0, vector<int>& rect1) {
    int x0 = rect0[0], x1 = rect0[2], x2 = rect1[0], x3 = rect1[2];
    int y0 = rect0[1], y1 = rect0[3], y2 = rect1[1], y3 = rect1[3];
    if (((x1 > x2) && (x0 < x3)) && (y0 < y3) && (y1 > y2)) return true;
    return false;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(35)<<'\n';
    return 0;
}