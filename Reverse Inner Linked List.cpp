class LLNode {
    public:
        int val;
        LLNode *next;
};

LLNode* solve(LLNode* node, int i, int j) {
    LLNode* jnode = node;
    for (int x=0;x<j;x++) jnode = jnode->next;
    LLNode* previnode = node;
    for (int x=0;x<i-1;x++) previnode = previnode->next;
    LLNode* inode = node;
    for (int x=0;x<i;x++) inode = inode->next;
    if (previnode == inode) previnode = nullptr;
    LLNode* inode1 = inode->next;
    LLNode* inode2 = inode->next;
    LLNode* temp = jnode->next;
    while (inode2!=(temp)) {
        inode2 = inode2->next;
        inode1->next = inode;
        inode = inode1;
        inode1 = inode2;
    }
    if (previnode)
        previnode->next = inode;
    LLNode* extrap = inode;
    for (int x=0;x<(j-i);x++) extrap = extrap->next;
    extrap->next = temp;
    if (!previnode) return inode;
    return node;
}

int main() {
    LLNode *head, *current = new LLNode();
    head = current;
    current->val = 0;
    current->next = new LLNode();
    current = current->next;
    current->val = 1;
    current->next = new LLNode();
    current = current->next;
    current->val = 2;
    current->next = new LLNode();
    current = current->next;
    current->val = 3;
    current->next = new LLNode();
    current = current->next;
    current->val = 4;
    current->next = nullptr;
    solve(head, 2, 3);
}
