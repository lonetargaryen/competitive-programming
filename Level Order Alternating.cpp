// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

vector<int> ans;
bool leftToRight = false;

void rec(Tree* node) {
    if (!node) return;
    if (leftToRight) {
        ans.push_back(node->left->val);
        ans.push_back(node->right->val);
        leftToRight = false;
        rec(node->right);
        rec(node->left);
    }
    else {
        ans.push_back(node->right->val);
        ans.push_back(node->left->val);
        leftToRight = true;
        rec(node->left);
        rec(node->right);
    }
}

vector<int> solve(Tree* root) {
    ans.push_back(root->val);
    leftToRight = true;
    rec(root);
    return ans;
}

int main() {
    // cout<<solve("xyxyxz")<<'\n';
    return 0;
}