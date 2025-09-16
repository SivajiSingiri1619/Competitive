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
    void left_leave(TreeNode* root,int& ans){
         
         if(root->left){
            left_leave(root->left,ans);

            if(root->left->left == NULL && root->left->right == NULL) ans += root->left->val;
         }

         if(root->right) left_leave(root->right,ans);

    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        left_leave(root,ans);
        return ans;
    }
};