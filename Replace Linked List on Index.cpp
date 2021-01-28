// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* a, LLNode* b, int lo, int hi) {
    LLNode* temp = a;
    while (hi--) temp = temp->next;
    LLNode* bEndpoint = b;
    while (bEndpoint->next) bEndpoint = bEndpoint->next;
    bEndpoint->next = temp->next;
    temp = a;
    --lo;
    if (lo < 0) return b;
    while (lo--) temp = temp->next;
    temp->next = b;
    return a;
}

int main() {
    // cout<<solve("aba", "cab")<<'\n';
    return 0;
}