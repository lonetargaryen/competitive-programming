// https://binarysearch.com/problems/One-Edit-Distance
#include<bits/stdc++.h>

using namespace std;

bool solve(string s0, string s1) {
    if (labs(s0.length() - s1.length()) > 1) return false;
    // bool ok = true;
    int errorCount = 0;
    if (s0.length() > s1.length()) {
        for (int i=0, j=0; i<s0.length() && j<s1.length(); i++, j++) {
            if (s0[i] != s1[j]) {
                errorCount++;
                j--;
            }
            if (errorCount > 1) break;
        }
        if (errorCount > 1) return false;
        return true;
    }
    else if (s1.length() > s0.length()) {
        for (int i=0, j=0; i<s0.length() && j<s1.length(); i++, j++) {
            if (s0[i] != s1[j]) {
                errorCount++;
                i--;
            }
            if (errorCount > 1) break;
        }
        if (errorCount > 1) return false;
        return true;
    }
    else {
        for (int i=0;i<s0.length();i++) {
            if (s0[i] != s1[i]) errorCount++;
            if (errorCount > 1) break;
        }
        if (errorCount > 1) return false;
        return true;
    }
}

int main() {
    cout<<solve("quicksort", "quicksort");
    return 0;
}