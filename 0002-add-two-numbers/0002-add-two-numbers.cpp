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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int total = 0, digit, carry, val1, val2;
        ListNode* curr1 = l1->next;
        ListNode* curr2 = l2->next;
        total = l1->val + l2->val;
        digit = total % 10;
        carry = total / 10;
        ListNode* head = new ListNode(digit);
        ListNode* tail = head;
        while (curr1 != nullptr || curr2 != nullptr || carry != 0) {
            val1 = 0;
            val2 = 0;
            if (curr1 != nullptr) {
                val1 = curr1->val;
                curr1 = curr1->next;
            }
            if (curr2 != nullptr) {
                val2 = curr2->val;
                curr2 = curr2->next;
            }
            total = val1 + val2 + carry;
            digit = total % 10;
            carry = total / 10;
            tail->next = new ListNode(digit);
            tail = tail->next;
        }
        return head;
    }
};