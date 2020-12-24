// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* ll0, LLNode* ll1) {
    LLNode* head = nullptr;
    LLNode* temp = head;
    while (ll0 && ll1) {
        if (ll0->val == ll1->val) {
            LLNode* nn = new LLNode();
            nn->val = ll0->val;
            if (!head) {
                head = nn;
                temp = nn;
            }
            else {
                temp->next = nn;
                temp = temp->next;
            }
            ll0 = ll0->next;
            ll1 = ll1->next;
        }
        else if (ll0->val < ll1->val) {
            LLNode* nn = new LLNode();
            nn->val = ll0->val;
            if (!head) {
                head = nn;
                temp = nn;
            }
            else {
                temp->next = nn;
                temp = temp->next;
            }
            ll0 = ll0->next;
        }
        else if (ll0->val > ll1->val) {
            LLNode* nn = new LLNode();
            nn->val = ll1->val;
            if (!head) {
                head = nn;
                temp = nn;
            }
            else {
                temp->next = nn;
                temp = temp->next;
            }
            ll1 = ll1->next;
        }
    }
    while (ll0) {
        LLNode* nn = new LLNode();
        nn->val = ll0->val;
        if (!head) {
            head = nn;
            temp = nn;
        }
        else {
            temp->next = nn;
            temp = temp->next;
        }
        ll0 = ll0->next;
    }
    while (ll1) {
        LLNode* nn = new LLNode();
        nn->val = ll1->val;
        if (!head) {
            head = nn;
            temp = nn;
        }
        else {
            temp->next = nn;
            temp = temp->next;
        }
        ll1 = ll1->next;
    }
    return head;
}

int main() {
    // cout<<solve("xtrujidaujwmkkxod", 25)<<'\n';
    return 0;
}