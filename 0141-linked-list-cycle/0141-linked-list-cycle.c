/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool hasCycle(struct ListNode *head) {
    struct ListNode* cur = head;
    for(int i = 0; i<=10000; i++)
    {
        if(cur == NULL)//走到空,无环
            return false;
        cur = cur->next;
    }
    //没有走到头,有环
    return true;
}