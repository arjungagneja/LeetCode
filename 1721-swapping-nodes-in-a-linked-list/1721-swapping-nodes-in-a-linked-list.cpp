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
        int last = count - k + 1, i = 1;
        ListNode* first;
        ListNode* second;
        while (i <= count) {
            if (i == k) {
                first = curr;
            }
            if (i == last) {
                second = curr;
            }
            curr = curr->next;
            i++;
        }
        swap(first->val, second->val);
        return head;
    }
};