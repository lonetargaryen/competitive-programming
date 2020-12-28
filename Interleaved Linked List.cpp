// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;


class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* l0, LLNode* l1) {
    if (!l0) return l1;
    if (!l1) return l0;
    LLNode* head = l0;
    while (l0 && l1) {
        LLNode* templ0 = l0->next;
        LLNode* templ1 = l1->next;
        l0->next = l1;
        if (templ0) l1->next = templ0;
        l0 = templ0;
        l1 = templ1;
    }
    
    return head;
}

int main() {
    vector<string> v = {"ab","ba","abc","cba","bca","ddddd"};
    // cout<<solve(v)<<'\n';
    return 0;
}