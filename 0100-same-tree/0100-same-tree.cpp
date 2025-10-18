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
    bool isSameTree(TreeNode* p, TreeNode* q) {

        // Algorithm  
        // Bascially we are checking all the false point

        // check is both the tree finsih tree at same time then return true !!!
        if (p == NULL && q == NULL)
            return true;
        // check whether any one of the tree not of equal lenght !!!

        if (p == NULL && q != NULL)
            return false;
        if (p != NULL && q == NULL)
            return false;

        // check whether the trees value are defferent or not tell me
        if (p->val != q->val)
            return false;

        bool leftAns = isSameTree(p->left, q->left);
        if (leftAns == false)
            return false;
        bool RightAns = isSameTree(p->right, q->right);
        if (RightAns == false)
            return false;

        // if pass all the condtion than return true brother !!!
        return true ;
    }
};