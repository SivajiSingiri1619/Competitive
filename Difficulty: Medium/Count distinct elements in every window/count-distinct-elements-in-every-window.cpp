class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        // code here
        map<int,int>mp;
        
        int i=0,j=0;
        for(j=0;j<k;j++){
            mp[arr[j]]++;
        }
        
        vector<int>res;
        res.push_back(mp.size());
        while(j<arr.size()){
             
              mp[arr[i]]--;
              mp[arr[j]]++;
              
              if(mp[arr[i]] == 0) mp.erase(arr[i]);
              res.push_back(mp.size());
              i++;
              j++;
        }
        return res;
    }
};