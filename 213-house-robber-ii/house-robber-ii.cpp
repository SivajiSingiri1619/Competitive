class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n < 2) return nums[0];
        else if(n == 2) return max(nums[0],nums[1]);

        vector<int>dp(n-1);
         dp[0] = nums[0];
         dp[1] = nums[1];
         if(nums[0] > nums[1]) {
            dp[1] = dp[0];
         }
         
         
         
        for(int i=2;i<n-1;i++){
            dp[i] = (nums[i] + dp[i-2]) > dp[i-1] ? (nums[i] + dp[i-2]) : dp[i-1];
        }

        vector<int>dp2(n-1);
        dp2[0] = nums[1];
        dp2[1] = nums[2] > nums[1] ? nums[2] : nums[1];
        for(int i=3;i<n;i++){
             dp2[i-1] = (nums[i] + dp2[i-3]) > dp2[i-2] ? dp2[i-3] + nums[i] : dp2[i-2];
        }
      return max(dp[n-2],dp2[n-2]);
    }
};