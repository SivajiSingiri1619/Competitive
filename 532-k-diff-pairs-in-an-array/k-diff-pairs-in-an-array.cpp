class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        
        sort(nums.begin(),nums.end());
        int res = 0;
        map<pair<int,int>,int>mp;
        for(int i=0;i<nums.size();i++){
            
             int low = lower_bound(nums.begin(),nums.end(),nums[i]+k) - nums.begin();
                cout<<low<<endl;
             if(low < nums.size() && nums[low] == nums[i]+k && low != i) mp[{nums[i],nums[low]}] = 1;
        }
        return mp.size();
    }
};