// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
    int acount = 0;
    for (int i=0;i<s.length();i++) if (s[i] == 'a') acount++;
    return (pow(2, acount));
}

int main() {
    cout<<solve("NT")<<'\n';
    return 0;
}