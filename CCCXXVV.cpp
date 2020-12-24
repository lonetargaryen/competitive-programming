// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(string numeral) {
    map<char, int> m;
    m['M'] = 1000;
    m['D'] = 500;
    m['C'] = 100;
    m['L'] = 50;
    m['X'] = 10;
    m['V'] = 5;
    int ans = 0;
    for (int i=0;i<numeral.length();i++) {
        if (numeral[i] == 'I') ans++;
        else {
            ans += m[numeral[i]];
            if (i > 0) {
                if (numeral[i-1] == 'I') ans--;
                else if (m[numeral[i-1]] < m[numeral[i]]) ans -= (2*m[numeral[i-1]]);
            }
        }
    }
    return ans;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}