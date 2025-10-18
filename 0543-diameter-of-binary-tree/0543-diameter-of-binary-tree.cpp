
class Solution {
public:
    // for finding the levels of tree !
    int levels(TreeNode* root) {
        // base case for that !!!
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }

    // helper functions for iterating the each levels of nodes and there find the diameter !!!
    void helper(TreeNode* root , int &maxDia){
        // base case where to stop !!! 
        if (root==NULL) return  ; 

        // calculte  the diameter for that !!!
        int dia  =  levels(root->left) + levels(root->right);

        // calculte the max dia for that brother !!!
        maxDia = max(maxDia , dia);
        helper(root->left, maxDia);
        helper(root->right, maxDia);

    }

    int diameterOfBinaryTree(TreeNode* root) {
        int maxDia =  0 ;
        helper(root, maxDia);
        return maxDia ;
    }
};