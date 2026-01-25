/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool helper(TreeNode* a, TreeNode* b) {
        // base case
        if (a == nullptr and b == nullptr)
            return true;
        // one null and other not than whole tree become not symetric dude

        if (a == nullptr || b == nullptr)
            return false;

        // value check

        if (a->val != b->val)
            return false;

        // mirror image comprasion
        return helper(a->left, b->right) and helper(a->right, b->left);
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr)
            return true;
        return helper(root->left, root->right);
    }
};