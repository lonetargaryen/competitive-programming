// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int solve(Tree* root) {
    if (!root) return 0;
    if (!(root->left) && (root->right)) return (1 + solve(root->right));
    if (!(root->right) && (root->left)) return (1 + solve(root->left));
    return (solve(root->left) + solve(root->right));
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}