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
    int maxLevelSum(TreeNode* root) {
        queue<TreeNode*>Q;
        Q.push(root);
        int maxi = INT_MIN,res,cnt=0;
        while(!Q.empty()){
              int size = Q.size();
               cnt++;
              int level_sum = 0;
              for(int i=0;i<size;i++){
                  TreeNode* temp = Q.front();
                  Q.pop();
                  level_sum += temp->val;
                  if(temp->left) Q.push(temp->left);
                  if(temp->right) Q.push(temp->right);
              }
              if(maxi < level_sum){
                 res = cnt;
                 maxi = level_sum;
              }
             
        }
        return res;
    }
};