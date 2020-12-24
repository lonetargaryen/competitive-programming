// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
    int ptr = 0, maxLength = 0;
    while (ptr < s.length()) {
        int i = ptr, currentLength = 0;
        while (s[i] == s[ptr]) {
            i++;
            currentLength++;
            if (i >= s.length()) break;
        }
        if (currentLength > maxLength) maxLength = currentLength;
        currentLength = 0;
        ptr = i;
    }
    return maxLength;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}