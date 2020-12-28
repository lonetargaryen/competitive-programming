// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

vector<int> leftLeaves;
vector<int> rightLeaves;

void rec(Tree* node, vector<int>& v) {
    if (!node) return;
    if (!(node->left) && !(node->right)) v.push_back(node->val);
    rec(node->left, v);
    rec(node->right, v);
}

bool solve(Tree* root0, Tree* root1) {
    leftLeaves.clear();
    rightLeaves.clear();
    rec(root0, leftLeaves);
    rec(root1, rightLeaves);
    if (leftLeaves.size() != rightLeaves.size()) return false;
    for (int i=0;i<leftLeaves.size();i++) {
        if (leftLeaves[i] != rightLeaves[i]) return false;
    }
    return true;
}

int main() {
    vector<int> v = {1,1,4,1};
    // cout<<solve(v)<<'\n';
    return 0;
}