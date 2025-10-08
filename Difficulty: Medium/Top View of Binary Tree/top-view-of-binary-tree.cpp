/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        // code here
        queue<pair<Node*,int>>Q;
        Q.push({root,0});
        map<int,int>mp;
        
        while(!Q.empty()){
            
            int size = Q.size();
            for(int i = 0;i<size;i++){
                auto pr = Q.front();
                Q.pop();
                
                if(mp[pr.second] == 0) mp[pr.second] = pr.first->data;
                
                if(pr.first->left) Q.push({pr.first->left,pr.second-1});
                if(pr.first->right) Q.push({pr.first->right,pr.second+1});
            }
        }
        vector<int>res;
        for(auto i:mp){
            res.push_back(i.second);
        }
        return res;
    }
};