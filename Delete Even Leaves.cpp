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
        if (root->val % 2) return root;
        else return nullptr;
    }
    return root;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {2,0,2};
    // solve(v);
    cout<<solve(v1, 2)<<'\n';
    return 0;
}