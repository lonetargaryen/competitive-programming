// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class Tree {
    public:
        int val;
        Tree *left;
        Tree *right;
};

int solve(Tree* root, vector<string>& moves) {
    vector<string> purifiedMoves;
    for (int i=0;i<moves.size();i++) {
        if (moves[i] != "UP") purifiedMoves.push_back(moves[i]);
        else purifiedMoves.pop_back();
    }
    Tree* ptr = root;
    for (int i=0;i<purifiedMoves.size();i++) {
        if (purifiedMoves[i] == "LEFT") ptr = ptr->left;
        else ptr = ptr->right;
    }
    return ptr->val;
}

int main() {
    vector<int> v = {-137,-215,-163,248,909,190};
    // solve(v);
    // cout<<solve(v)<<'\n';
    return 0;
}