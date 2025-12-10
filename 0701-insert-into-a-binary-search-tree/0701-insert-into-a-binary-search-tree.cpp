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
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if (root == NULL) root = new TreeNode (val) ;

        else if (root->val>val){
            // go left 

            // check first if the left has null or not if null attach to it or go deep down 
            if (root->left == NULL) {
                root->left = new TreeNode(val);
            }
            // traverse deep 
            else insertIntoBST(root->left,val);
        }
        // same do for the right 
        else {
             // check first if the left has null or not if null attach to it or go deep down 
            if (root->right == NULL) {
                root->right = new TreeNode(val);
            }
            // traverse deep 
            else insertIntoBST(root->right ,val);

        }
        return root ;
        
    }
};