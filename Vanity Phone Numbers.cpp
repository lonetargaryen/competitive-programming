// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<string> solve(string digits) {
    map<int, string> m;
    m[2] = "abc";
    m[3] = "def";
    m[4] = "ghi";
    m[5] = "jkl";
    m[6] = "mno";
    m[7] = "pqrs";
    m[8] = "tuv";
    m[9] = "wxyz";
    vector<string> v;
    string s = "";
    for (int i=0;i<digits.length();i++) {
        int digit = digits[i] - '0';
    }
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}