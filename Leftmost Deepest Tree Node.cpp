// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int deepestLevel = 0;
int ans;
 
void deepestNode(Tree* node, int k) {
    if (!node) return;
    if (!(node->left) && !(node->right)) {
        if (k > deepestLevel) {
            deepestLevel = k;
            ans = node->val;
        }
    }
    deepestNode(node->left, k + 1);
    deepestNode(node->right, k + 1);
}

int solve(Tree* root) {
    deepestLevel = 0;
    ans = -1;
    deepestNode(root, 1);
    return ans;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}