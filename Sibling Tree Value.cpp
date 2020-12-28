// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int solve(Tree* root, int k) {
    if (root->left->val == k) return root->right->val;
    else if (root->right->val == k) return root->left->val;
    if (k > root->val) return solve(root->right, k);
    else return solve(root->left, k);
}

int main() {
    // cout<<solve("xyxyxz")<<'\n';
    return 0;
}