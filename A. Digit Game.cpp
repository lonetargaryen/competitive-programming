// https://codeforces.com/problemset/problem/1419/A
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string number;
        cin>>number;
        if (n%2) {
            bool oddExists = false;
            int i = n-1;
            while (i >= 0) {
                int currDigit = number[i] - '0';
                if (currDigit%2) {
                    oddExists = true;
                    break;
                }
                i -= 2;
            }
            oddExists ? cout<<1<<'\n' : cout<<2<<'\n';
        }
        else {
            bool evenExists = false;
            int i = n-1;
            while (i > 0) {
                int currDigit = number[i] - '0';
                if (!(currDigit%2)) {
                    evenExists = true;
                    break;
                }
                 i -= 2;
            }
            evenExists ? cout<<2<<'\n' : cout<<1<<'\n';
        }
    }

    return 0;
}