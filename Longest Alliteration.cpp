// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<string>& words) {
    int longestAlliteration = 0;
    if (!words.size()) return longestAlliteration;
    int ptr = 0;
    while (ptr < (words.size() - 1)) {
        int current = 0;
        while (words[ptr][0] == words[ptr+1][0]) {
            ptr++;
            current++;
            if (ptr >= words.size()-1) break;
        }
        if (current > longestAlliteration) longestAlliteration = current;
        ptr++;
    }
    return longestAlliteration;
}

int main() {
    vector<vector<int>> courses = {{},{2,0,1},{}};
    vector<string> v = {"dali","monocystidea","snurl","teal","unenamored","unrosed"};
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}