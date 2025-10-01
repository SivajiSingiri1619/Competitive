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
    void inorder(TreeNode* root,int &pre,int &mini){
         if(root ==  NULL) return;
          
         if(root->left)  inorder(root->left,pre,mini);
         
         if(pre != -1){
            mini = min(mini,(root->val-pre));
         }
         pre = root->val;
         if(root->right) inorder(root->right,pre,mini);

    }
    int minDiffInBST(TreeNode* root) {
         int mini = INT_MAX;
         int pre = -1;
         inorder(root,pre,mini);
        
         return mini;
         
    }
};