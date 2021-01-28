// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};


unordered_map<int, int> m;
vector<int> v(2);

void recursiveFunction(Tree* node, bool currlevel) {
    if (!node) return;
    m[node->val]++;
    v[currlevel]++;
    recursiveFunction(node->left, !currlevel);
    recursiveFunction(node->right, !currlevel);
}

bool solve(Tree* root) {
    if (!root) return true;
    m.clear();
    v[0] = 0; v[1] = 0;
    recursiveFunction(root, 0);
    int a = 0, b = 0;
    if (m.size() == 1) a = m.begin()->second;
    else {
        a = m.begin()->second;
        b = (++m.begin())->second;
    }
    bool one = (v[0] == a && v[1] == b);
    bool two = (v[1] == a && v[0] == b);
    return (one || two);
}

int main() {
    // cout<<solve("aba", "cab")<<'\n';
    return 0;
}