class Solution {
public:
   

    bool check(vector<int>& lan1,vector<int>& lan2){
        
        if(lan1.empty() || lan2.empty()) return false;

         for (int i = 0; i <lan1.size(); i++) {

              if(find(lan2.begin(), lan2.end(), lan1[i]) != lan2.end())  return true;
            }
          return false;
    }

    int minimumTeachings(int n, vector<vector<int>>& lan, vector<vector<int>>& friendships) {
        
         unordered_set<int> users;

         for(auto& fr : friendships){
             
             if(!(check(lan[fr[0] - 1],lan[fr[1] - 1]))){
                 users.insert(fr[0]);
                 users.insert(fr[1]);
             }
         }
        int un = 0;
         for(int i=1;i<=n;i++){
             
             int cnt = 0;
            
             for(int u: users){

                 if(find(lan[u-1].begin(),lan[u-1].end(),i) != lan[u-1].end()) cnt++;
             }
             un = max(un,cnt);
         }
         return users.size()-un;
    }
};