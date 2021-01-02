// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

string solve(vector<string>& words) {
    string prefix = "";
    int minLength = INT_MAX;
    for (int i=0;i<words.size();i++) if (words[i].length() < minLength) minLength = words[i].length();
    int ptr = 0;
    while (ptr < minLength) {
        char currChar = words[0][ptr];
        bool ok = true;
        for (int i=1;i<words.size();i++) 
            if (words[i][ptr] != currChar) {
                ok = false;
                break;
            }
        if (ok) prefix += currChar;
        else break;
        ptr++;
    }
    return prefix;
}

int main() {
    vector<vector<int>> courses = {{},{2,0,1},{}};
    vector<string> v = {"dali","monocystidea","snurl","teal","unenamored","unrosed"};
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}