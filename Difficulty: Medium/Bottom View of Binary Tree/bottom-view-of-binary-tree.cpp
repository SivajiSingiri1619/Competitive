/*
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = NULL;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        // code here
        queue<pair<Node*,int>>Q;
        map<int,int>mp;
        Q.push({root,0});
        while(!Q.empty()){
             int size = Q.size();
             
             for(int i=0;i<size;i++){
                 auto pr = Q.front();
                 
                 Q.pop();
                 mp[pr.second] = pr.first->data;
                 
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