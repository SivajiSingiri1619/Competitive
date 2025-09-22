class Solution {
public:
   
    int maxFrequencyElements(vector<int>& nums) {
        unordered_map<int,int>mp;

        for(int i:nums) mp[i]++;
        
        int maxi = 0;
        for(auto i:mp){
            if(maxi < i.second) maxi = i.second;
        }
        int res = 0;
        for(auto i:mp){
            if(i.second == maxi){
                res += i.second;
            }
        }
        return res;
    }
};