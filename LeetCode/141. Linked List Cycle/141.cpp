/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution
{
public:
    bool hasCycle(ListNode *head)
    {
        ListNode *l1 = head, *l2 = head;

        if(head == NULL)
            return false;
        if(head->next == NULL)
            return false;

        while(1)
        {
            l1 = l1->next;
            l2 = l2->next;
            if(l2->next == NULL)
                return false;
            l2 = l2->next;
            if(l2->next == NULL)
                return false;

            if(l1 == l2)
                return true;
        }
    }
};
