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
    int min_height(TreeNode* root){
           queue<TreeNode*> Q;
           if(!root) return 0;
           int res = 1;
           Q.push(root);
           while(!Q.empty()){

               int n = Q.size();
               for(int i=0;i<n;i++){
                TreeNode* node = Q.front();
                Q.pop();
               if(node->left == NULL && node->right == NULL) return res;

               if(node->left) Q.push(node->left);
               if(node->right) Q.push(node->right);
               }
               res++;
           }
           return res;
          
    }
    int minDepth(TreeNode* root) {
        
         return min_height(root);
    }
};