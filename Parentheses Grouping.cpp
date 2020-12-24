// https://binarysearch.com/problems/Parentheses-Grouping
#include<bits/stdc++.h>

using namespace std;

vector<string> solve(string s) {
    vector<string> v;
    stack<char> st;
    int ptr = 0, n = s.length();
    string wd = "";
    while (ptr < n) {
        if (s[ptr] == '(') {
            st.push(s[ptr]);
            wd += "(";
        }
        else if (s[ptr] == ')') {
            st.pop();
            wd += ")";
        }
        if (st.empty()) {
            v.push_back(wd);
            wd = "";
        }
        ptr++;
    }
    return v;
}

int main() {
    vector<string> trial = solve("()()(()())");
    for (auto x: trial) cout<<x<<'\n';
    return 0;
}