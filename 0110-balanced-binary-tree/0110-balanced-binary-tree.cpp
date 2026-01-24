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
class Solution {
public:
    int level(TreeNode *root){
        if(root==NULL) return 0 ;
        return 1 + max(level(root->left) , level(root->right));
    }
    bool helper(TreeNode* root){
        if(root==NULL)  return true ;
        int leftlevel = level(root->left);
        int rightlevel = level(root->right);
        if(abs(leftlevel-rightlevel)>1) return false ;
        if(!helper(root->left)) return false;
        if(!helper(root->right)) return false ;
        return true ;

        
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL) return true ;
        bool value = helper(root);
        return value ;
    }
};