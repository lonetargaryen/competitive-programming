#include<bits/stdc++.h>

using namespace std;

string solve(string s) {
    int len = s.length();
    string ans = "";
    for (int i=0;i<len;i++) {
        ans += s[i];
        while (s[i+1] == s[i]) {
            i++;
            if (i == (len-1)) break;
        }
    }
    return ans;
}

int main() {
    vector<int> v = {673,673,673,673,673,673,673};
    // cout<<solve(v)<<'\n';
    return 0;
}