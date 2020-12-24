// https://binarysearch.com/problems/Closest-Distance-to-Character
#include<bits/stdc++.h>

using namespace std;

vector<int> solve(string s, string c) {
    vector<int> positions;
    int n = s.length();
    for (int i=0;i<n;i++) if (s[i] == c[0]) positions.push_back(i);
    vector<int> v(n);
    for (int i=0;i<n;i++) {
        if (s[i] == c[0]) {
            v[i] = 0;
            continue;
        }
        int left = 0, right = 0, j = i-1;
        bool leftFound = false, rightFound = false;
        while (j >= 0) {
            left++;
            if (s[j] == c[0]) {
                leftFound = true;
                break;
            }
            j--;
        }
        if (!leftFound) left = 0;
        j = i+1;
        while (j<n) {
            right++;
            if (s[j] == c[0]) {
                rightFound = true;
                break;
            }
            j++;
        }
        if (!rightFound) right = 0;
        if (!left) v[i] = right;
        else if (!right) v[i] = left;
        else if (left <= right) v[i] = left;
        else if (right < left) v[i] = right;
    }
    return v;
}

int main() {
    vector<int> ans = solve("aaab", "b");
    for (auto x: ans) cout<<x<<' ';
    cout<<'\n';
    return 0;
}