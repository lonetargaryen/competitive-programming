#include<bits/stdc++.h>

using namespace std;


 class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int recursive(Tree* root, int lo, int hi) {
    if (root == nullptr) return 0;
    if (root->val >= lo && root->val <= hi) return (1 + solve(root->left, lo, hi) + solve(root->right, lo, hi)));
    return 0;
}

int solve(Tree* root, int lo, int hi) {
    
}

int main() {
    vector<int> v = {673,673,673,673,673,673,673};
    // cout<<solve(v)<<'\n';
    return 0;
}