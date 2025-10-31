class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int cnt=1;
        vector<int>v;
        map<int,int>mpp;
        for(auto i:nums){
            mpp[i]++;
        }
        for(auto j: mpp){
            if(j.second>1) v.push_back(j.first);
        }
        
        return v;
        
    }
};