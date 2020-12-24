// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

bool compareTrees(Tree* left, Tree* right) {
    if (left && right) {
        if (left->val == right->val) {
            return (compareTrees(left->left, right->right) && compareTrees(left->right, right->left));
        }
        else return false;
    }
    else {
        if (left || right) return false;
        return true;
    }
}

bool solve(Tree* root) {
    if (!root) return true;
    if (!(root->left) && !(root->right)) return true;
    if (root->left && root->right) {
        return compareTrees(root->left, root->right);
    }
    else return false;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}