// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* node) {
    int nodeCount = 0;
    LLNode* temp = node;
    while (temp) {
        nodeCount++;
        temp = temp->next;
    }
    LLNode* mid = node;
    if (nodeCount%2) {
        int midway = nodeCount/2;
        while (midway--) mid = mid->next;
    }
    else {
        int midway = (nodeCount/2) - 1;
        while (midway--) mid = mid->next;
    }
    LLNode* ptr2 = mid, *ptr1 = node;
    ptr2 = ptr2->next;
    while (ptr1 != mid) {
        ptr2->val += ptr1->val;
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return mid;
}

int main() {
    // cout<<solve("abc", "xyz")<<'\n';
    return 0;
}