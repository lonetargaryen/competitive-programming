// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

bool solve(Tree* root) {
    if (!root) return true;
    if (!(root->left) && !(root->right)) return true;
    int currSum = 0;
    if (root->left) currSum += root->left->val;
    if (root->right) currSum += root->right->val;
    return ((root->val == currSum) && solve(root->left) && solve(root->right));
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    // cout<<solve(v)<<'\n';
    return 0;
}