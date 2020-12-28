// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

bool rec(Tree* node0, Tree* node1) {
    if (!node0 && !node1) return true;
    if (!node0 || !node1) return false;
    if (node0->val != node1->val) return false;
    else return ((rec(node0->left, node1->right) && rec(node0->right, node1->left)) || (rec(node0->left, node1->left) && rec(node0->right, node1->right)));
}

bool solve(Tree* source, Tree* target) {
    if (!source && !target) return true;
    if (!source || !target) return false;
    if (source->val == target->val) {
        bool WFT = rec(source, target);
        if (WFT) return WFT;
    }
    return (solve(source, target->left) || solve(source, target->right));
}

int main() {
    Tree* tree = new Tree();
    // cout<<solve(v)<<'\n';
    return 0;
}