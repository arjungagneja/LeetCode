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

 void adder(TreeNode* root, int& sum) {
    if(root == NULL)
        return;
    adder(root->left, sum);
    if (root->left != NULL && root->left->left == NULL && root->left->right == NULL) {
        sum = sum + root->left->val;
    }
    adder(root->right, sum);
 }
 
class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        adder(root, sum);
        return sum;
    }
};