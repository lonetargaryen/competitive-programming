// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
        Tree() {
            val = NULL;
            left = nullptr;
            right = nullptr;
        }
};

/**
 * class Tree {
 *     public:
 *         int val;
 *         Tree *left;
 *         Tree *right;
 * };
 */
vector<Tree*> v;

void inorderTraversal(Tree* node) {
    if (!node) return;
    if (!(node->left) && !(node->right)) {
        v.push_back(node);
        return;
    }
    inorderTraversal(node->left);
    v.push_back(node);
    inorderTraversal(node->right);
    return;
}

int solve(Tree* root, int t) {
    v.clear();
    inorderTraversal(root);
    for (int i=0;i<v.size();i++) {
        if (v[i]->val > t) return v[i]->val;
    }
    return 0;
}

int main() {
    Tree* tree = new Tree();
    tree->val = 37;
    cout<<solve(tree, 37)<<'\n';
    
    return 0;
}