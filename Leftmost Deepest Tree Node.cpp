// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

int deepestLevel = 0;

class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int deepestNode(Tree* node, int k) {
    if (!node) return 0;
    if (!(node->left) && !(node->right)) {
        if (k > deepestLevel) return node->val;
    }
    return max(deepestNode(node->left, k + 1), deepestNode(node->right, k + 1));
}

int solve(Tree* root) {
    return deepestNode(root, 0);
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}