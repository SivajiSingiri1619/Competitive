class Solution {
public:
    long long maxProfit(vector<int>& prices, vector<int>& strategy, int k) {
        
        long long tot = 0;
        for(int i=0;i<prices.size();i++){
            tot += (prices[i] * strategy[i]);
        }
        long long res = tot,wind_sum=0,pos_sum = 0;
        int l=0,t=k/2,r=0;
        while(r<k){
            wind_sum += (prices[r] * strategy[r]);
            if(r >= k/2) pos_sum += prices[r];
            r++;
        }
        res = max((tot-wind_sum)+pos_sum,res);
        while(r<prices.size()){
             
             wind_sum -= (prices[l] * strategy[l]);
             wind_sum += (prices[r] * strategy[r]);
             
             pos_sum -= (prices[t]);
             pos_sum += prices[r];

            res = max((tot-wind_sum)+pos_sum,res);
             t++;
             l++;
             r++;
        }

        return res;
        
    }
};