// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};


class LLNode {
    public:
        int val;
        LLNode *next;
};

Tree* recursiveFunction(Tree* root, LLNode* node, int prevValue) {
    Tree* ptr = nullptr;
    if (!node) {
        return root;
    }
    else {
        ptr = new Tree();
        ptr->val = node->val;
        if (node->val < prevValue) {
            root->left = ptr;
            ptr = recursiveFunction(ptr, node->next, ptr->val);
            return root;
        }
        else {
            root->right = ptr;
            ptr = recursiveFunction(ptr, node->next, ptr->val);
            return root;
        }
    }
}

Tree* solve(LLNode* node) {
    if (!node) return nullptr;
    Tree* root = new Tree();
    root->val = node->val;
    return recursiveFunction(root, node->next, node->val);
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(35)<<'\n';
    return 0;
}