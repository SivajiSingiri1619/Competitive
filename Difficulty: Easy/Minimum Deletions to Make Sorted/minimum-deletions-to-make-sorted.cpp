class Solution {
  public:
    int minDeletions(vector<int>& nums) {
        // code here
         vector<int>vec;
        vec.push_back(nums[0]);
        for(int i=1;i<nums.size();i++){
            
             auto it = lower_bound(vec.begin(),vec.end(),nums[i]) - vec.begin();
             if(it == vec.size()){
                vec.push_back(nums[i]);
             }
             else{
                   vec[it] = nums[i];
             }
        }
        return nums.size() - vec.size();
    }
};