/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

void inOrder(TreeNode* p, TreeNode* q, bool &check) {
    if (p == NULL && q == NULL) {
        return;
    }
    if (p == NULL || q == NULL) {
        check = false;
        return;
    }

    inOrder(p->left, q->left, check);
    if (p->val != q->val) {
        check = false;
        return;
    }
    inOrder(p->right, q->right, check);
}

class Solution {
public:
    bool isSameTree(TreeNode* p, TreeNode* q) {
        bool check = true;
        inOrder(p, q, check);
        return check;
    }
};