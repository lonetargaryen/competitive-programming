// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* l0, LLNode* l1) {
    LLNode* head = nullptr;
    LLNode* temp = head;
    while (l0 && l1) {
        if (l0->val == l1->val) {
            if (!head) {
                temp = new LLNode();
                temp->val = l0->val;
                head = temp;
            }
            else {
                LLNode* tmp = new LLNode();
                tmp->val = l0->val;
                temp->next = tmp;
                temp = temp->next;
            }
            l0 = l0->next;
            l1 = l1->next;
        }
        else if (l0->val < l1->val) l0 = l0->next;
        else l1 = l1->next;
    }
    return head;
}

int main() {
    // vector<int> nums = {1,3,2,7,6};
    // vector<vector<int>> ans = solve(nums);
    return 0;
}