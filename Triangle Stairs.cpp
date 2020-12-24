// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

string solve(int n) {
    string ans = "";
    for (int i=1;i<=n;i++) {
        for (int j=0;j<(n-i);j++) ans += " ";
        for (int j=0;j<i;j++) ans += "*";
        if (i != n) ans += "\n";
    }
    return ans;
}

int main() {
    // vector<int> nums = {1,3,2,7,6};
    // vector<vector<int>> ans = solve(nums);
    return 0;
}