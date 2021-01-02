// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int getHeight(Tree* node) {
    if (!node) return 0;
    return (1 + max(getHeight(node->left), getHeight(node->right)));
}

int solve(Tree* root) {
    if (!root) return 0;
    return max(1 + getHeight(root->left) + getHeight(root->right), max(solve(root->left), solve(root->right)));
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(35)<<'\n';
    return 0;
}