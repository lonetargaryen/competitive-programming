// https://binarysearch.com/problems/Vigenere-Cipher
#include<bits/stdc++.h>

using namespace std;

string solve(string text, string key) {
    for (int i=0;i<text.length();i++) text[i] = ((text[i] + (key[i] - 'a')) - 'a')%26 + 'a';
    return text;
}

int main() {
    cout<<solve("abz", "cbb")<<'\n';
    return 0;
}