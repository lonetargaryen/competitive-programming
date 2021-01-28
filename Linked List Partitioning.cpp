// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* node, int k) {
    vector<int> lesser;
    LLNode* temp = node;
    while (temp) {
        if (temp->val < k) lesser.push_back(temp->val);
        temp = temp->next;
    }
    vector<int> equal;
    temp = node;
    while (temp) {
        if (temp->val == k) equal.push_back(temp->val);
        temp = temp->next;
    }
    vector<int> greater;
    temp = node;
    while (temp) {
        if (temp->val > k) greater.push_back(temp->val);
        temp = temp->next;
    }
    LLNode* head = new LLNode();
    temp = head;
    for (int i=0;i<lesser.size();i++) {
        head->val = lesser[i];
        head->next = new LLNode();
        head = head->next;
    }
    for (int i=0;i<equal.size();i++) {
        head->val = equal[i];
        head->next = new LLNode();
        head = head->next;
    }
    for (int i=0;i<greater.size();i++) {
        head->val = greater[i];
        head->next = new LLNode();
        head = head->next;
    }
    LLNode* ans = temp;
    while (temp->next->next) temp = temp->next;
    temp->next = nullptr;
    return ans;
}

int main() {
    // cout<<solve("aba", "cab")<<'\n';
    return 0;
}