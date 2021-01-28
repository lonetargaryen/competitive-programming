// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* node, int k) {
    int len = 0;
    LLNode* temp = node;
    while (temp) {
        temp = temp->next;
        len++;
    }
    if (!k || (len == k)) return node;
    k = (len - k);
    LLNode* newhead = node;
    LLNode* temp2 = node;
    while (k--) {
        temp2 = newhead;
        newhead = newhead->next;
    }
    temp2->next = nullptr;
    temp = newhead;
    while (temp->next) temp = temp->next;
    temp->next = node;
    return newhead;
}

int main() {
    // cout<<solve("aba", "cab")<<'\n';
    return 0;
}