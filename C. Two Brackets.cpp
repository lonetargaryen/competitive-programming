// https://codeforces.com/contest/1452/problem/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        bool openingSquareBracket = false, openingRoundBracket = false;
        int openingRoundCount = 0, openingSquareCount = 0, closingRoundCount = 0, closingSquareCount = 0;
        for (int i=0;i<s.length();i++) {
            if (s[i]=='(') {
                openingRoundBracket = true;
                openingRoundCount++;
            }
            if (s[i]=='[') {
                openingSquareBracket = true;
                openingSquareCount++;
            }
            if (s[i]==')' && openingRoundCount) {
                openingRoundCount--;
                closingRoundCount++;
            }
            if (s[i]==']' && openingSquareCount) {
                openingSquareCount--;
                closingSquareCount++;
            }
        }
        cout<<closingRoundCount + closingSquareCount<<'\n';
    }

    return 0;
}