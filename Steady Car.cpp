// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<int>& positions) {
    int n = positions.size();
    vector<int> speedVector(n-1);
    for (int i=0;i<n-1;i++) {
        speedVector[i] = abs(positions[i+1] - positions[i]);
    }
    int longest = 0;
    for (int i=0;i<n-1;i++) {
        int ptr = i;
        while (speedVector[ptr] == speedVector[ptr+1]) {
            ptr++;
            if (ptr > n-2) break;
        }
        if (ptr == i && !longest) longest = 1;
        if ((ptr - i + 1) > longest) longest = (ptr - i + 1);
        i = ptr;
    }
    return longest+1;
}

int main() {
    vector<int> v = {3, 2, 2, 3, 2, 2, 2, 2, 2};
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}