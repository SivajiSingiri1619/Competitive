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
    int maxDepth(TreeNode* root) {
         
         int height = 0;
         queue<TreeNode*> Q;
         if(root == NULL) return height;
         Q.push(root);
         while(!Q.empty()){
              
              int size = Q.size();
              for(int i=0;i<size;i++){
                  TreeNode* top = Q.front();
                  Q.pop();

                  if(top->left) Q.push(top->left);

                  if(top->right) Q.push(top->right);
              }
              height++;
         }
         return height;
    }
};