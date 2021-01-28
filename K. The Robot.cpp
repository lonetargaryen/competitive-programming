// https://codeforces.com/contest/1468/problem/K
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        int hOffset = 0, vOffset = 0;
        unordered_map<char, int> characterFrequency;
        for (int i=0;i<s.length();i++) {
            characterFrequency[s[i]]++;
            if (s[i] == 'L') hOffset--;
            else if (s[i] == 'U') vOffset++;
            else if (s[i] == 'R') hOffset++;
            else vOffset--;
        }
        if (hOffset && vOffset) {
            cout<<0<<' '<<0<<'\n';
            continue;
        }
        if (hOffset) {
            pair<int, int> position = {0, 0};
            char targetChar;
            if (hOffset < 0) targetChar = 'L';
            else targetChar = 'R';
            int occurrences = 0;
            for (int i=0;i<s.length();i++) {
                if (s[i] == 'L') position.first--;
                else if (s[i] == 'U') position.second++;
                else if (s[i] == 'R') position.first++;
                else position.second--;
                if (s[i] == targetChar) {
                    occurrences++;
                    if (occurrences == (characterFrequency[targetChar] - abs(hOffset) + 1)) break;
                }
            }
            cout<<position.first<<' '<<position.second<<'\n';
        }
        else {
            pair<int, int> position = {0, 0};
            char targetChar;
            if (vOffset < 0) targetChar = 'D';
            else targetChar = 'U';
            int occurrences = 0;
            for (int i=0;i<s.length();i++) {
                if (s[i] == 'L') position.first--;
                else if (s[i] == 'U') position.second++;
                else if (s[i] == 'R') position.first++;
                else position.second--;
                if (s[i] == targetChar) {
                    occurrences++;
                    if (occurrences == (characterFrequency[targetChar] - abs(vOffset) + 1)) break;
                }
            }
            cout<<position.first<<' '<<position.second<<'\n';
        }
    }

    return 0;
}