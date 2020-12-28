// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

set<int> s;

void getVerticalLines(Tree* node, int xaxis) {
    if (!node) return;
    s.insert(xaxis);
    getVerticalLines(node->left, xaxis-1);
    getVerticalLines(node->right, xaxis+1);
}

int solve(Tree* root) {
    s.clear();
    getVerticalLines(root, 0);
    return s.size();
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    // cout<<solve(v)<<'\n';
    return 0;
}