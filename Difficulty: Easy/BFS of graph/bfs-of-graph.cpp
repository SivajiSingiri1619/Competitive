class Solution {
  public:
    vector<int> bfs(vector<vector<int>> &adj) {
        // code here
        queue<int> q;
        vector<int> res;
        vector<bool> vis(adj.size(),false);
        q.push(0);
        vis[0] = true;
        for(int i=0;i<adj.size();i++){
            
             if(q.empty()) break;
             
              int curr = q.front();
              res.push_back(curr);
              
              q.pop();
             for(int j=0;j<adj[curr].size();j++){
                  
                  if(!vis[adj[curr][j]]) {
                      q.push(adj[curr][j]);
                      vis[adj[curr][j]] = true;
                  }
             }
        }
        return res;
    }
};
