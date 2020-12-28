// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

bool solve(Tree* root0, Tree* root1) {
    if (!root0 && !root1) return true;
    if (!root0 || !root1) return false;
    if (root0->val == root1->val) {
        return ((solve(root0->left, root1->left) && solve(root0->right, root1->right)) || (solve(root0->left, root1->right) && solve(root0->right, root1->left)));
    }
    else return false;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(35)<<'\n';
    return 0;
}