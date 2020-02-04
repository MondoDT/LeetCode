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
    int getDecimalValue(ListNode* head)
    {
        ListNode *index = head;
        int sum = 0, tmp = 1, length = 1;

        while(index->next != NULL)
        {
            ++length;
            tmp *= 2;
            index = index->next;
        }

        index = head;

        while(index != NULL)
        {
            if(index->val == 1)
            {
                sum += tmp;
            }

            tmp /= 2;
            index = index->next;
        }

        return sum;
    }
};
