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
    vector<int> rightSideView(TreeNode* root) {
        if(root == NULL) return {};
        queue<TreeNode*>Q;
        Q.push(root);
        int level = 0;
        map<int,int>mp;
        while(!Q.empty()){
             int size = Q.size();
             for(int i=0;i<size;i++){
                TreeNode* pr = Q.front();
                Q.pop();
                mp[level] = pr->val;
                if(pr->left) Q.push(pr->left);
                if(pr->right) Q.push(pr->right);
             }
             level++;
        }
        vector<int>res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        return res;
    }
};