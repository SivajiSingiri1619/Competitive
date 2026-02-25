class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,priority_queue<int, vector<int>, greater<int>>>mp;

        for(auto i:arr) mp[__builtin_popcount(i)].push(i);

        vector<int>res;
        for(auto i:mp){
              auto pq = i.second;
              while(!pq.empty()){
                   res.push_back(pq.top());
                   pq.pop();
              }
        }
        return res;
         

    }
};