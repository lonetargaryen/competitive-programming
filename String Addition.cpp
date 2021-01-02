// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

string solve(string a, string b) {
    int one = stoi(a);
    int two = stoi(b);
    int three = (one + two);
    return to_string(three);
}

int main() {
    vector<int> v = {0,2,2,3};
    // solve(v);
    // cout<<solve(v)<<'\n';
    return 0;
}