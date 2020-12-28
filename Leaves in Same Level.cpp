// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

unordered_set<int> heights;

void getHeights(Tree* node, int k) {
    if (!node) return;
    if (!node->left && !node->right) heights.insert(k);
    if (node->left) getHeights(node->left, k+1);
    if (node->right) getHeights(node->right, k+1);
}

bool solve(Tree* root) {
    heights.clear();
    getHeights(root, 0);
    if (heights.size() >= 2) return false;
    return true;
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    // cout<<solve(v)<<'\n';
    return 0;
}