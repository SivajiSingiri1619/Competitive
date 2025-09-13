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
    
    void count_fun(TreeNode* temp,int &cnt){
                 
                 if(!temp) return ;
                 cnt++;
                 count_fun(temp->left,cnt);
                 count_fun(temp->right,cnt);
    }
    int countNodes(TreeNode* root) {
        
        TreeNode* temp = root;
        int cnt = 0;
        count_fun(temp,cnt);
        return cnt;
    }
};