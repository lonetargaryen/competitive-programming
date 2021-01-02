// https://binarysearch.com/problems/Knights'-Attack
#include<bits/stdc++.h>

using namespace std;

class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* node, int k) {
    LLNode* ans = node;
    int i = k;
    bool firstSwitchDone = false;
    while (node) {
        LLNode* nodenext = node->next;
        LLNode* repl = nodenext->next;
        i--;
        while (i--) {
            nodenext->next = node;
            if (!i) {
                if (!firstSwitchDone) ans = nodenext;
                node->next = repl;
                node = node->next;
                nodenext = node->next;
                repl = node->next;
                firstSwitchDone = true;
                break;
            }
        }
    }
    return ans;
}

int main() {
    vector<int> v = {1,2,3,4,5,6};
    // solve(v);
    // cout<<solve(35)<<'\n';
    return 0;
}