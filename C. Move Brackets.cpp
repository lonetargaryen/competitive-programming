// https://codeforces.com/problemset/problem/1374/C
#include<bits/stdc++.h>

using namespace std;

int main() {
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int expectedRBS = n/2, foundRBS = 0;
        stack<char> st;
        for (int i=0;i<n;i++) {
            if (s[i]=='(') st.push('(');
            else if (s[i]==')' && st.size()) {
                st.pop();
                foundRBS++;
            }
        }
        cout<<expectedRBS - foundRBS<<'\n';
    }

    return 0;
}