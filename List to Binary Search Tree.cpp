// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

Tree* solve(vector<int>& nums) {
    if (!nums.size()) return nullptr;
    Tree* root = new Tree();
    int k = floor(float(nums.size())/2.0);
    root->val = nums[k];
    auto opening = nums.begin(), ending = nums.begin()+k;
    vector<int> leftVector(opening, ending);
    opening = ending + 1;
    ending = nums.end();
    vector<int> rightVector(opening, ending);
    if (leftVector.size()) root->left = solve(leftVector);
    if (rightVector.size()) root->right = solve(rightVector);
    return root;
}

int main() {
    vector<int> v = {0,1,2,3,4};
    Tree* tmp = solve(v);
    // cout<<solve("xyxyxz")<<'\n';
    return 0;
}