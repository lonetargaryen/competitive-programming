// https://binarysearch.com/problems/3-and-7
#include<bits/stdc++.h>

using namespace std;

int solve(string s) {
    int ans = -1;
    set<char> st;
    for (int i=0;i<s.length();i++) {
        int currsize = st.size();
        st.insert(s[i]);
        if (currsize == st.size()) {
            ans = i;
            break;
        }
    }
    return ans;
}