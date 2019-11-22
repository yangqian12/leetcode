/**
 * Definition for singly-linked list.
#include<iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(NULL) {}
 };
*/

class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* p = new ListNode(-1);
        ListNode* res;
        res = p;
        while (l1 || l2) {
            if (!l1) {
                p->next = l2;
                return res->next;
            }
            else if (!l2) {
                p->next = l1;
                return res->next; 
            }
            if (l1->val <= l2->val) {
                p->next = l1;
                p = l1;
                l1 = l1->next;
            } else {
                p->next = l2;
                p = l2;
                l2 = l2->next;
            }
        }
        ListNode* head = res->next;
        delete res;
        return head;
    }
};




