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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2)
    {
        ListNode *index = new ListNode(0),
            *head = index, *l1index = l1, *l2index = l2;
        int l1num = 0, l2num = 0;

        while(l1index!=NULL || l2index!=NULL)
        {
            //判斷數字
            if(l1index == NULL)
            {
                l1num = 0;
            }
            else
            {
                l1num = l1index->val;
            }

            if(l2index == NULL)
            {
                l2num = 0;
            }
            else
            {
                l2num = l2index->val;
            }

            //相加
            index->val += l1num + l2num;

            //判斷l1或l2是否需要往後移
            if(l1index != NULL)
            {
                l1index = l1index->next;
            }
            if(l2index != NULL)
            {
                l2index = l2index->next;
            }

            //判斷是否需要近位
            if(index->val >= 10)
            {
                index->val -= 10;
                index->next = new ListNode(1);
                index->next->val = 1;
                index = index->next;
            }
            else if(l1index!=NULL || l2index!=NULL)
            {
                //若還有數字則繼續下去
                index->next = new ListNode(0);
                index = index->next;
            }
        }

        return head;
    }
};
