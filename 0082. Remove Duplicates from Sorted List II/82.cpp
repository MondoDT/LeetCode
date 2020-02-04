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
        ListNode *index = head, *lastNode = head;

        bool repeat = false, first = true;

        while(index != NULL && index->next != NULL)
        {
            if(index->val == index->next->val)
            {
                index->next = index->next->next;
                repeat = true;
            }
            else if(repeat)
            {
                if(lastNode == head && first == true)
                {
                    lastNode = head = index->next;
                }
                else
                {
                    lastNode->next = index->next;
                }

                index = index->next;
                repeat = false;
            }
            else
            {
                lastNode = index;
                index = index->next;
                first = false;
            }
        }

        if(repeat == true && lastNode == head && first == true)
        {
            head = NULL;
        }
        else if(repeat == true)
        {
            lastNode->next = NULL;
        }


        return head;
    }
};
