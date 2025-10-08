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
    vector<int> rightView(Node *root) {
        //  code here
        if(root == NULL) return {};
        queue<Node*>Q;
        Q.push(root);
        int level = 0;
        map<int,int>mp;
        while(!Q.empty()){
             int size = Q.size();
             for(int i=0;i<size;i++){
                Node* pr = Q.front();
                Q.pop();
               mp[level] = pr->data;
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