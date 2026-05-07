class Solution {
public:
    int recur(vector<int>& coins,int amount,vector<int>& dp){
           if(amount == 0) return 0;
           if(amount < 0) return 1e9;
           if(dp[amount] != -1) return dp[amount];
           int mini = 1e9;
           for(auto coin:coins){
               mini = min(mini , 1+recur(coins,amount - coin,dp));
           }
           return dp[amount] = mini;
    }
    int coinChange(vector<int>& coins, int amount) {
        
          vector<int>dp(amount+1,-1);
          return recur(coins,amount,dp) == 1e9 ? -1 : recur(coins,amount,dp);
    }
};