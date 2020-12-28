// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

string solve(string s) {
    for (int i=0;i<s.length();i++) {
        if (s[i] == 'y') {
            s.erase(i, 1);
            i--;
        }
        else if (s[i] == 'x' && s[i+1] == 'z') {
            s.erase(i, 2);
            i--;
        }
    }
    return s;
}

int main() {
    cout<<solve("xyxyxz")<<'\n';
    return 0;
}