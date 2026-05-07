class Solution {
public:
    int rob(vector<int>& nums) {
        
        int n = nums.size();
        if(n < 2) return nums[0];
        vector<int>dp(n);
        dp[0] = nums[0];
        dp[1] = nums[1];
        for(int i=2;i<n;i++){
            if(i-2 != 0){
                 dp[i] = max(nums[i]+dp[i-2],nums[i]+dp[i-3]);
            }
            else dp[i] = nums[i] + dp[i-2];
            
        }
        return max(dp[n-1],dp[n-2]);
    }
};