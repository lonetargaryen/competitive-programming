// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

string solve(vector<string>& words) {
    string ans = words[0];
    ans[0] = tolower(ans[0]);
    for (int i=1;i<words.size();i++) {
        string toAppend = words[i];
        toAppend[0] = toupper(toAppend[0]);
        ans += toAppend;
    }
    return ans;
}

int main() {
    // cout<<solve("NT")<<'\n';
    return 0;
}