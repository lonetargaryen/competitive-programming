// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


bool solve(string s) {
    int openingCount = 0;
    for (int i=0;i<s.length();i++) {
        if (s[i] == '(') {
            openingCount++;
        }
        else {
            openingCount--;
            if (openingCount < 0) return false;
        }
    }
    if (openingCount) return false;
    return true;
}

int main() {
    cout<<solve("((()")<<'\n';
    return 0;
}