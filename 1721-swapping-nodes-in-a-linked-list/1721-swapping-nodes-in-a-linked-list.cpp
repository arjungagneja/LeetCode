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
    ListNode* swapNodes(ListNode* head, int k) {
        ListNode* curr = head;
        int count = 0;
        while (curr != nullptr) {
            count++;
            curr = curr->next;
        }
        curr = head;
        int last = count - k + 1, i = 1, temp1, temp2;
        while (i <= count) {
            if (i == k) {
                temp1 = curr->val;
            }
            if (i == last) {
                temp2 = curr->val;
            }
            curr = curr->next;
            i++;
        }
        i = 1;
        curr = head;
        while (i <= count) {
            if (i == k) {
                curr->val = temp2;
            }
            if (i == last) {
                curr->val = temp1;
            }
            curr = curr->next;
            i++;
        }
        return head;
    }
};