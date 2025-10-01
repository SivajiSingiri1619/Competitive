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
   void cal_of(TreeNode* root,vector<string> &res,string s){
             if(root == NULL) return;

             s = s + to_string(root->val) + "->";
          if(root->left ==  NULL && root->right == NULL){
             if(!s.empty()){
                int n = s.size();
                s.erase(s.begin()+(n-2),s.end());
                res.push_back(s);
             }
          }
             cal_of(root->left,res,s);
             cal_of(root->right,res,s);
   }
    vector<string> binaryTreePaths(TreeNode* root) {
           string s = "";
           vector<string>res;
           cal_of(root,res,s);
           
            return res;
    }
};