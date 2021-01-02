// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

Tree* solve(Tree* root, int lo, int hi) {
    if (!root) return root;
    if (!root->left && !root->right) {
        if (root->val < lo || root->val > hi) return nullptr;
        return root;
    }
    if (root->val < lo) return solve(root->right, lo, hi);
    if (root->val > hi) return solve(root->left, lo, hi);
    root->left = solve(root->left, lo, hi);
    root->right = solve(root->right, lo, hi);
    return root;
}

int main() {
    vector<int> v = {-137,-215,-163,248,909,190};
    // solve(v);
    // cout<<solve(v)<<'\n';
    return 0;
}