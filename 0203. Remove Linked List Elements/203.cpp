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
    ListNode* removeElements(ListNode* head, int val)
    {
        if(head == NULL)
            return head;

        while(head->val == val)
        {
            head = head->next;
            if(head == NULL)
                return head;
        }

        ListNode* index = head;

        while(index != NULL && index->next != NULL)
        {
            if(index->next->val == val)
            {
                index->next = index->next->next;
            }
            else
            {
                index = index->next;
            }
        }

        return head;
    }
};
