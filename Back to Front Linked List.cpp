// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* node) {
    vector<int> values;
    LLNode* temp = node;
    while (temp) {
        values.push_back(temp->val);
        temp = temp->next;
    }
    LLNode* head = nullptr;
    LLNode* helper = head;
    int limit;
    values.size() % 2 ? limit = ((values.size()/2)+1) : limit = (values.size()/2);
    for (int i=0;i<limit;i++) {
        if (helper) {
            helper->next = new LLNode();
            helper = helper->next;
        }
        else {
            helper = new LLNode();
            if (!head) head = helper;
        }
        helper->val = values[values.size() - i - 1];
        if (!(i == values.size()/2)) {
            helper->next = new LLNode();
            helper = helper->next;
            helper->val = values[i];
        }
    }
    return head;
}

int main() {
    // cout<<solve("aba", "cab")<<'\n';
    return 0;
}