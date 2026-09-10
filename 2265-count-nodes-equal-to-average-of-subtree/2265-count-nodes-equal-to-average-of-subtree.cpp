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
    int ans = 0;

    pair<int, int> add(TreeNode* root) {

        if (root == nullptr)
            return {0, 0};

        pair<int, int> leftadd = add(root->left);
        pair<int, int> rightadd = add(root->right);

        int sum = leftadd.first + rightadd.first + root->val;

        int count = leftadd.second + rightadd.second + 1;

        cout << "Node: " << root->val << "  Sum: " << sum
             << "  Count: " << count << endl;
        int avg = sum / count;
        if (avg == root->val)
            ans++;

        return {sum, count};
    }

    int averageOfSubtree(TreeNode* root) {
        add(root);
        return ans ;
    }
};