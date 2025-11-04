class Solution {
public:
    vector<int> findXSum(vector<int>& nums, int k, int x) {
        
        vector<int>sub;
        for(int i=0;i<k;i++){
            sub.push_back(nums[i]);
        }
        vector<int>res;
        int ind = 0;
        for(int i=k-1;i<nums.size();i++){

            int tot = 0;
             priority_queue<pair<int,int>>pq;
             map<int,int>mp;
             for(int j=0;j<k;j++) mp[sub[j]]++;
             for(auto &i:mp) pq.push({i.second,i.first});
             
             if(mp.size() < x){
                tot += accumulate(sub.begin(),sub.end(),0);
             }
             else{
                 int l=x;
                 while(l--){
                      
                      auto pr = pq.top();
                      tot += (pr.first*pr.second);
                      pq.pop();
                 }
             }
            cout<<sub[0]<<" ";
             sub.erase(sub.begin()+0);
             
           if(i != nums.size()-1)  sub.push_back(nums[i+1]);
             res.push_back(tot);
        }
        return res;
    }
};