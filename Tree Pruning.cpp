// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

Tree* solve(Tree* root) {
    if (!root) return root;
    root->left = solve(root->left);
    root->right = solve(root->right);
    if (!root->left && !root->right) {
        if (root->val) return root;
        return nullptr;
    }
    return root;
}

int main() {
    vector<int> v = {-137,-215,-163,248,909,190};
    // solve(v);
    // cout<<solve(v)<<'\n';
    return 0;
}