// https://binarysearch.com/problems/Base-3-to-Integer
#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
    int ans = 0, n = s.length();
    for (int i=n-1;i>=0;i--) {
        int digit = int(s[i] - '0');
        ans += (digit * pow(3, n-1-i));
    }
    return ans;
}

int main() {
    cout<<solve("10")<<'\n';
    return 0;
}