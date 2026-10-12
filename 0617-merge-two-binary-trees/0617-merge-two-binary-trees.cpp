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

void helper(TreeNode* root1, TreeNode* root2) {
    if (root1 == NULL || root2 == NULL) {
        return;
    }
    if (root1->left != NULL && root2->left != NULL) {
        root2->left->val += root1->left->val;
        helper(root1->left, root2->left);
    }
    else if (root1->left != NULL && root2->left == NULL) {
        root2->left = root1->left;
    }
    if (root1->right != NULL && root2->right != NULL) {
        root2->right->val += root1->right->val;
        helper(root1->right, root2->right);
    }
    else if (root1->right != NULL && root2->right == NULL) {
        root2->right = root1->right;
    }
}

class Solution {
public:
    TreeNode* mergeTrees(TreeNode* root1, TreeNode* root2) {
        if (root1 == NULL && root2 == NULL) {
            return NULL;
        }
        else if (root1 != NULL && root2 == NULL) {
            return root1;
        }
        else if (root1 == NULL && root2 != NULL) {
            return root2;
        }
        root2->val += root1->val;
        helper(root1, root2);
        return root2;
    }
};