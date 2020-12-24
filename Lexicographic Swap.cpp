// https://binarysearch.com/problems/Lexicographic-Swap
#include<bits/stdc++.h>

using namespace std;

string solve(string s) {
    char min = 'z';
    int index = -1;
    for (int i=0;i<s.length();i++) {
        if (s[i]<=min) {
            index = i;
            min = s[i];
        }
    }
    if (index == 0) return s;
    int ptr = 0;
    while ((s[ptr] == min) && (ptr < index)) ptr++;
    if (ptr>=s.length()) return s;
    min = s[ptr];
    s[ptr] = s[index];
    s[index] = min;
    return s;
}

int main() {
    cout<<solve("bbppvwxz")<<'\n';
    return 0;
}