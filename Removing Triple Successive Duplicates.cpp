// https://binarysearch.com/problems/Removing-Triple-Successive-Duplicates
#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
    int ptr = 0, n = s.length(), ans = 0;
    while (ptr < n) {
        char curr = s[ptr];
        int multiples = 0;
        while(s[ptr] == curr) {
            ptr++;
            multiples++;
        }
        if (multiples >= 3) ans += (multiples/3);
    }
    return ans;
}

int main() {
    cout<<solve("1100011")<<'\n';
    return 0;
}