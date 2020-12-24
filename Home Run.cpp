#include<bits/stdc++.h>

using namespace std;

int solve(int n) {
    string wd = "";
    while (n) {
        (n%2) ? wd += '1' : wd += '0';
        n /= 2;
    }
    int ptr = 0, ans = 0;
    while (ptr < wd.length()) {
        if (wd[ptr] == '0') {
            ptr++;
            continue;
        }
        else {
            int currentLength = 0;
            while (wd[ptr] == '1') {
                ptr++;
                currentLength++;
                if (ptr >= wd.length()) break;
            }
            if (currentLength >= ans) ans = currentLength;
        }
    }
    return ans;
}

int main() {
    cout<<solve(8)<<'\n';
    return 0;
}