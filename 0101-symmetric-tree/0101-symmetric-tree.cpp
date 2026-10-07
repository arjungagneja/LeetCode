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

void checker(TreeNode* l, TreeNode* r, bool &check) {
    if (l == NULL && r == NULL) return;
    if (l == NULL || r == NULL) {
        check = false;
        return;
    }
    if (l->val != r->val) {
        check = false;
        return;
    }
    checker(l->left, r->right, check);
    checker(l->right, r->left, check);
}

class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        bool check = true;
        checker(root, root, check);
        return check;
    }
};