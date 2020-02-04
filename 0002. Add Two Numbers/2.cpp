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
            //�P�_�Ʀr
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

            //�ۥ[
            index->val += l1num + l2num;

            //�P�_l1��l2�O�_�ݭn���Ჾ
            if(l1index != NULL)
            {
                l1index = l1index->next;
            }
            if(l2index != NULL)
            {
                l2index = l2index->next;
            }

            //�P�_�O�_�ݭn���
            if(index->val >= 10)
            {
                index->val -= 10;
                index->next = new ListNode(1);
                index->next->val = 1;
                index = index->next;
            }
            else if(l1index!=NULL || l2index!=NULL)
            {
                //�Y�٦��Ʀr�h�~��U�h
                index->next = new ListNode(0);
                index = index->next;
            }
        }

        return head;
    }
};
