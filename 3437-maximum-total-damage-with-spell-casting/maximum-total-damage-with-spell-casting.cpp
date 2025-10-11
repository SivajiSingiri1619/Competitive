class Solution {
public:
    
    long long maximumTotalDamage(vector<int>& power) {
       
        map<int,int> mp;
        vector<long long> sums; 
        vector<int> val;

        for(int i=0;i<power.size();i++){
            mp[power[i]]++;
        }

        for(auto i:mp){
            sums.push_back(1LL * i.first * i.second);  
            val.push_back(i.first);
        }

        int n = val.size();
        if(n==0) return 0;
        if(n == 1) return sums[0];

        vector<long long> dp(n,0);
        dp[0] = sums[0];

        if(val[1] - val[0] <= 2)
            dp[1] = max(dp[0], sums[1]); 
        else
            dp[1] = dp[0] + sums[1];

        for (int i = 2; i < n; i++) {
            int j = i - 1;
            while(j >= 0 && val[i] - val[j] <= 2) j--;
            if(j >= 0)
                dp[i] = max(dp[i - 1], dp[j] + sums[i]);
            else
                dp[i] = max(dp[i - 1], sums[i]);
        }

        return dp[n-1];
    }
};