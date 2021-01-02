// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

bool solve(Tree* root, Tree* target) {
    if (!root && !target) return true;
    if (!root || !target) return false;
    if (root->val == target->val) {
        return (solve(root->left, target->left) && solve(root->right, target->right));
    }
    else return (solve(root->left, target) || solve(root->right, target));
}

int main() {
    // vector<vector<int>> courses = {{},{2,0,1},{}};
    vector<int> v = {0,1,2};
    vector<int> v1 = {1,2,0};
    // solve(v);
    // cout<<solve(v, v1)<<'\n';
    return 0;
}