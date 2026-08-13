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
        unordered_set<ListNode*> addr;
        ListNode* curr = head;
        while (curr != nullptr) {
            if (addr.count(curr) == 1) {
                return true;
            }
            addr.insert(curr);
            curr = curr->next;
        }
        return false;
    }
};