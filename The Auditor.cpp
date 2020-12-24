// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
    int ans = 0;
    for (int i = s.length()-1;i >= 0;i--) {
        int multiplier = s.length() - i - 1;
        ans += (((s[i] - 'A')) * (pow(26, multiplier)));
    }
    return ans;
}

int main() {
    cout<<solve("NT")<<'\n';
    return 0;
}