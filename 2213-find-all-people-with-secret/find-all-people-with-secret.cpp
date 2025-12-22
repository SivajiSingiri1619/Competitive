class Solution {
public:
    static bool custom(const vector<int>&a,const vector<int>&b){
           return a[2] < b[2];
    }
    vector<int> findAllPeople(int n, vector<vector<int>>& meetings, int firstPerson) {
        
        vector<vector<pair<int,int>>>vec_pair(n);
        sort(meetings.begin(),meetings.end(),custom);
        for(auto meet:meetings){
             vec_pair[meet[0]].push_back({meet[1],meet[2]});
             vec_pair[meet[1]].push_back({meet[0],meet[2]});
         }
        
        queue<pair<int,int>>Q;
        Q.push({0,0});
        Q.push({firstPerson,0});
        vector<int>vis(n,INT_MAX);
        vis[0] = 0;
        vis[firstPerson] = 0;
        while(!Q.empty()){
            auto p = Q.front();
            Q.pop();
            int per = p.first;
            int time = p.second;
            vis[per] = time;
            for(auto vec:vec_pair[per]){

                 if(vec.second >= time && vis[vec.first] > vec.second) {
                     Q.push({vec.first,vec.second});
                     vis[vec.first] = vec.second;
            }
        }
        }
        vector<int>res;
        for(int i=0;i<n;i++){
            if(vis[i] != INT_MAX) res.push_back(i);
            // cout << vis[i] << " " ;
        }
        return res;
    }
};