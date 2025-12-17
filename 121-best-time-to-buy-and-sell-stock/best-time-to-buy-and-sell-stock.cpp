class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
        int dp = 0;
        int maxi_val = prices[prices.size()-1];

        for(int i=prices.size()-2;i>=0;i--){
             
             if(maxi_val > prices[i]){
                dp = max(dp,maxi_val - prices[i]);
             }
             else maxi_val = prices[i];
        }
        return dp;
    }
};