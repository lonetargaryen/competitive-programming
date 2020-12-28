// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<string> solve(string s, int n) {
    vector<string> ans;
    if (!s.length()) return ans;
    if (n == 1) {
        ans.push_back(s);
        return ans;
    }
    for (int i=0;i<n;i++) {
        string temp = "";
        int ptr = i;
        while (ptr < s.length()) {
            temp += s[ptr];
            ptr += n;
        }
        ans.push_back(temp);
    }
    return ans;
}

int main() {
    vector<string> v;
    v = solve("cdpee", 4);
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}