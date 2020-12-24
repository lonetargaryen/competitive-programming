// https://binarysearch.com/problems/Pattern-to-Word-Bijection
#include<bits/stdc++.h>

using namespace std;

bool solve(string s, string p) {
    map<string, char> m;
    set<char> usedKeys;
    int i = 0, w = -1;
    string word = "";
    s += " ";
    while ((s[i]!=' ') || (i<s.length())) {
        word += s[i];
        i++;
        if (i>=s.length()) break;
        if (s[i] == ' ') {
            w++;
            if (m.count(word)) {
                if (m[word]!=p[w]) return false;
            }
            else {
                if (usedKeys.count(p[w])) return false;
                m[word] = p[w];
                usedKeys.insert(p[w]);
            }
            word = "";
            i++;
            if (i>=s.length()) break;
        }
    }
    return true;
}

int main() {
    cout<<solve("hello there", "aa")<<'\n';

    return 0;
}