class Solution {
public:
    int maxProfit(vector<int>& prices) {
        
          int tot_profit = 0;
          for(int i=0;i<prices.size()-1;i++)
              if(prices[i] < prices[i+1]) tot_profit += (prices[i+1] - prices[i]);
              
        return tot_profit;
    }
};