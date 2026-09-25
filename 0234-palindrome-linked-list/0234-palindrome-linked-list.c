/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
bool isPalindrome(struct ListNode* head) {
    int valus[100005];
    int count = 0;

    struct ListNode *curr = head;
    while(curr != NULL)
    {
        valus[count] = curr -> val;
        curr = curr ->next;
        count ++;
    }

    int Left = 0;
    int Right = count - 1;
    while(Left < Right)
    {
        if(valus[Right] != valus[Left])
        {
            return false;
        }
        Right --;
        Left ++;
    }
    return true;
}