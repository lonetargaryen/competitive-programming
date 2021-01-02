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
    if (!root->left && !root->right) return root;
    if (root->left && !root->right) root = solve(root->left);
    else if (root->right && !root->left) root = solve(root->right);
    else {
        root->left = solve(root->left);
        root->right = solve(root->right);
    }
    return root;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(35)<<'\n';
    return 0;
}