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
    ListNode* deleteDuplicates(ListNode* head)
    {
        ListNode *index = head;

        while(index != NULL && index->next != NULL)
        {
            if(index->val == index->next->val)
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
