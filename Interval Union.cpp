// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

vector<vector<int>> solve(vector<vector<int>>& intervals) {
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> ans;
    stack<vector<int>> st;
    for (auto x: intervals) {
        if (st.empty()) st.push(x);
        else {
            vector<int> temp = st.top();
            if (x[1] >= temp[0] && x[0] <= temp[1]) {
                temp[0] = min(temp[0], x[0]);
                temp[1] = max(temp[1], x[1]);
                st.pop();
                st.push(temp);
            }
            else if (x[1] < temp[0]) {
                st.push(x);
            }
            else {
                while (st.size()) {
                    ans.push_back(temp);
                    st.pop();
                    if (st.size()) temp = st.top();
                }
                st.push(x);
            }
        }
    }
    while (st.size()) {
        vector<int> temp = st.top();
        ans.push_back(temp);
        st.pop();
        if (st.size()) temp = st.top();
    }
    return ans;
}

int main() {
    
    vector<vector<int>> v = {{2,3},{4,5},{0,4}};
    v = solve(v);
    // Tree* tmp = solve(v);
    // cout<<solve("xyxyxz")<<'\n';
    return 0;
}