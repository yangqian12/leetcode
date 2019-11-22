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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
       int flag = 0;
       ListNode* l = new ListNode(-1);
       ListNode* p;
       p = l;
       while (l1 || l2) {
           ListNode* q = new ListNode(-1);
           int value = l1 ? l1->val:0 + l2 ? l1->val:0 + flag;
           value = value%10;
           flag = value/10;
           q->val = value;
           p->next = q;
           p = q;
           }
       p = l->next;
       return p;
    }
};
