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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == NULL && headB == NULL) return NULL;
        if (headA == NULL) return headB;
        if (headB  == NULL) return headA;
        ListNode* currA = headA;
        while (currA != NULL) {
            ListNode* currB = headB;
            while (currB != NULL) {
                if (currA == currB) return currA;
                currB=currB->next;
            }
            currA=currA->next;
        }
        return NULL;
    }
};