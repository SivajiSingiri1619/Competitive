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
    int res = 0;
    void find(TreeNode* root,int curr){

          curr = curr << 1;
         
          if(root->val == 1) {
             curr++;
          }
           if(root->left == NULL && root->right == NULL){
             res += curr;
             return ;
          }
          

          if(root->left)find(root->left,curr);
          if(root->right)find(root->right,curr);
    }
    int sumRootToLeaf(TreeNode* root) {
        
         int curr = (0>>1);
         find(root,curr);
         return res;
    }
};