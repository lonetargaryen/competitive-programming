// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

bool solve(vector<int>& pushes, vector<int>& pops) {
    stack<int> st;
    // st.push(pushes[0]);
    int popptr = 0;
    // if (st.top() == pops[popptr]) {
    //     st.pop();
    //     popptr++;
    // }
    for (int i=0;i<pushes.size();i++) {
        st.push(pushes[i]);
        while (st.top() == pops[popptr]) {
            st.pop();
            popptr++;
            if (!st.size()) break;
        }
    }
    if (st.size()) {
        for (;popptr<pops.size();popptr++) {
            if (st.top() != pops[popptr]) return false;
            st.pop();
        }
    }
    return true;
}

int main() {
    // vector<vector<int>> courses = {{},{2,0,1},{}};
    vector<int> v = {0,1,4,6,8};
    vector<int> v1 = {1,0,8,6,4};
    // solve(v);
    cout<<solve(v, v1)<<'\n';
    return 0;
}