#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        string s;
        cin>>s;
        for (int i=0;i<s.length();i++) {
            if (s[i]=='B' && i!=0) {
                s.erase(i-1, 2);
                i -= 2;
            }
        }
        cout<<s.length()<<'\n';
    }
    return 0;
}