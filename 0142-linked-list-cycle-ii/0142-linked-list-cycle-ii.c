/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode *detectCycle(struct ListNode *head) {
    struct ListNode *fast = head;
    struct ListNode *slow = head;

    while( fast != NULL && fast -> next != NULL)
    {
        slow = slow -> next;
        fast = fast -> next -> next;
        
        if(slow == fast)
        {
            struct ListNode *index1 = head;
            struct ListNode *index2 = slow;

            while(index1 != index2)
            {
                index1 = index1 -> next;
                index2 = index2 -> next;            
            }
            return index1;
        }
    }
    return NULL;
}