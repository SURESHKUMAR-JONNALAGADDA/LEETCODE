/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        int f=0;
        ListNode *t1=head;
        ListNode *t2=head;
        if(t1==NULL||t1->next==NULL)
            return false;
        while(t2->next&&t2->next->next!=NULL)
        {
            t1=t1->next;
            t2=t2->next->next;
            if(t1==t2)
            {
                f=1;
                break;
            }
        }
        if(f==1)
        {
            return true;
        }
        else
        {
            return false;

        }
    }
};