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
    // making a fucntion for finding the total level fo the tree node !
    int levels(TreeNode* root) {
        if (root == NULL)
            return 0;
        return 1 + max(levels(root->left), levels(root->right));
    }
    // fuction for pusing the val level by level
    void nthLevel(TreeNode* root, int currLevel, int desireLevel,
                  vector<int>& v) {
        // base case
        if (root == NULL)
            return;
        if (currLevel == desireLevel) {
            v.push_back(root->val);
            return;
        }
        // call the remaning level if  the desire level not matchs to current
        // level
        nthLevel(root->left, currLevel + 1, desireLevel, v);
        nthLevel(root->right, currLevel + 1, desireLevel, v);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        int n   = levels(root);
         
 vector<vector<int>> ans ;
         // pusing all the element levels by levels 
         int i = 1 ;
         while(n>=i){
            vector<int>v ; 
            nthLevel(root ,  1 ,i , v );
            ans.push_back(v);
            i++;

         }
         return ans ;
    }
};