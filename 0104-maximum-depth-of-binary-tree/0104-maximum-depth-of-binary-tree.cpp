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
    int depth(TreeNode* root){
        // base case 
        if(root==NULL) return  0 ;
        int leftTree =  depth(root->left);
        int rightTree = depth(root->right);
        int height =  1 + max(leftTree,rightTree);
        return height;

    }
    int maxDepth(TreeNode* root) {
        int ans =  depth(root);
        return ans;
        
    }
};