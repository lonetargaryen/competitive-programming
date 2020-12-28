// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int solve(vector<string>& exp) {
    stack<int> st;
    for (int i=0;i<exp.size();i++) {
        if (exp[i][0] == '-' && exp[i].length() > 1) {
            string substring = exp[i].substr(1);
            int ans = stoi(substring);
            st.push(ans*-1);
        }
        else if ((exp[i][0] - '0') >= 0 && (exp[i][0] - '0') <= 9) {
            int ans = stoi(exp[i]);
            st.push(ans);
        }
        else {
            int operand1 = st.top();
            st.pop();
            int operand2 = st.top();
            st.pop();
            if (exp[i][0] == '+') st.push(operand1 + operand2);
            else if (exp[i][0] == '-') st.push(operand2 - operand1);
            else if (exp[i][0] == '*') st.push(operand1 * operand2);
            else st.push(operand2 / operand1);
        }
    }
    return st.top();
}

int main() {
    vector<string> v = {"2","-77","+"};
    // solve(v);
    cout<<solve(v)<<'\n';
    return 0;
}