/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    int getDecimalValue(ListNode* head) {
        int res=0,c=0;
        ListNode* n=head;
        while(n!=nullptr)
        {
            c++;
            n=n->next;
        }
        while(head!=nullptr)
        {
            res+=head->val*pow(2,c-1);
            c--;
            head=head->next;
        }
        return res;
    }
};