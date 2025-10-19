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
    // helper function for inveting the tree node !!!
    void helper (TreeNode* root ){
        // base case where we have to stop  
        if (root==NULL) return ;
        // temp variable for swapping bro  !! 
        TreeNode* temp =  root-> left ; 
        root->left  =  root->right ; 
        root->right = temp ; 

        // now call recursively to reverse it brother 
        helper(root->left);
        helper(root->right);
        
    }

    TreeNode* invertTree(TreeNode* root) {
        helper(root);
        return root;
    }
};