// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int recursiveFunction(Tree* node, int& ans) {
    if (!node) return 0;
    int leftSum = recursiveFunction(node->left, ans);
    int rightSum = recursiveFunction(node->right, ans);
    int currSum = leftSum + rightSum + node->val;
    ans = max(ans, currSum);
    
    return (node->val + max(leftSum, rightSum));
}

int solve(Tree* root) {
    int maxSum = 0;
    int temp = recursiveFunction(root, maxSum);
    return maxSum;
}

int main() {
    vector<int> v = {5, 10};
    vector<int> v1 = {-9, 9};
    // solve(v);
    // cout<<solve(v, v1, 1)<<'\n';
    return 0;
}