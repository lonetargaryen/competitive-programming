// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* node) {
    LLNode* first = node;
    if (!first) return node;
    if (!node->next) return node;
    LLNode* second = node->next;
    while (second->next) {
        LLNode* temp = second->next;
        second->next = first;
        if (first == node) first->next = nullptr;
        first = second;
        second = temp;
    }
    second->next = first;
    if (first->next == second) first->next = nullptr;
    return second;
}

int main() {
    // cout<<solve("aba", "cab")<<'\n';
    return 0;
}