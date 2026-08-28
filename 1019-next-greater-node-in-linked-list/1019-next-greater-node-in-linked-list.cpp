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
    vector<int> nextLargerNodes(ListNode* head) {
        vector<int> ans;
        ListNode* curr = head;
        while (curr != nullptr) {
            ListNode* temp = curr;
            int yes = 1;
            while (temp != nullptr) {
                if (temp->val > curr->val) {
                    ans.push_back(temp->val);
                    yes = 0;
                    break;
                }
                else temp = temp->next;
            }
            if (yes == 1) ans.push_back(0);
            curr = curr->next;
        }
        return ans;
    }
};