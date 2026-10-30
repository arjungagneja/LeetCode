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
    ListNode* rotateRight(ListNode* head, int k) {
        ListNode* curr = head;
        ListNode* tail;
        int count = 0;
        while (curr != nullptr) {
            curr = curr->next;
            count++;
        }
        if (count == 1 || count == 0) return head;
        int rotations = k % count;
        for (int i = 0; i < rotations; i++) {
            curr = head;
            while (curr->next->next != nullptr) {
                curr = curr->next;
            }
            curr->next->next = head;
            head = curr->next;
            curr->next = nullptr;
        }
        return head;
    }
};