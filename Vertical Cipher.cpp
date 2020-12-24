// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<string> solve(string s, int n) {
    vector<string> ans;
    for (int i=0;i<s.length()-n;i++) {
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
    v = solve("abcdefghi", 5);
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}