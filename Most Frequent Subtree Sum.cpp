// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

map<int, int> m;

int createMap(Tree* node) {
    if (!node) return 0;
    int currSum = node->val + createMap(node->left) + createMap(node->right);
    m[currSum]++;
    return currSum;
}

int solve(Tree* root) {
    m.clear();
    int ans = INT_MIN, res, tmp = createMap(root);
    for (auto x: m) {
        if (x.second > ans) {
            ans = x.second;
            res = x.first;
        }
    }
    return res;
}

int main() {
    Tree* root = new Tree();
    root->val = 0;
    
    // vector<vector<int>> v = {{1,2,3},{4,5,6},{7,8,9}};
    // v = solve(v);
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}