/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */

#include <algorithm>
#include <vector>

class Solution
{
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2)
    {
        ListNode *head = l1, *index = l1;
        vector<int> table;
        bool l1Null = false, l2Null = false;

        if(l1 == NULL && l2 == NULL)
            return l1;
        else if(l1 == NULL)
        {
            head = l2;
            index = l2;
            l1Null = true;
        }
        else if(l2 == NULL)
            l2Null = true;


        while(index->next != NULL && index != NULL)
        {
            table.push_back(index->val);
            index = index->next;
        }

        table.push_back(index->val);

        if(l1Null == false && l2Null == false)
        {
            index->next = l2;
            index = index->next;

            while(index->next != NULL && index != NULL)
            {
                table.push_back(index->val);
                index = index->next;
            }

            table.push_back(index->val);
        }

        sort(table.begin(), table.end());
        index = head;
        for(vector<int>::iterator it = table.begin(); it!=table.end(); ++it)
        {
            index->val = *it;
            index = index->next;
        }

        return head;
    }
};
