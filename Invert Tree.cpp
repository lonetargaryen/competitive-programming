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
    // if (!root->left && !root->right) return root;
    Tree* temp = root->left;
    root->left = root->right;
    root->right = temp;
    root->left = solve(root->left);
    root->right = solve(root->right);
    return root;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    // cout<<solve(v1, 2)<<'\n';
    return 0;
}