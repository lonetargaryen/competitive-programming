// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int answer = 0;

int getMaximal(Tree* node) {
    if (!node->left && !node->right) {
        answer++;
        return node->val;
    }
    int leftVal = INT_MIN, rightVal = INT_MIN;
    if (node->left) leftVal = getMaximal(node->left);
    if (node->right) rightVal = getMaximal(node->right);
    if (node->val >= max(leftVal, rightVal)) answer++;
    return max(node->val, max(leftVal, rightVal));
}

int solve(Tree* root) {
    answer = 0;
    if (!root) return answer;
    int temp = getMaximal(root);
    return answer;
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    // cout<<solve(v)<<'\n';
    return 0;
}