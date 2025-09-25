class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        
          int n = triangle.size();
          vector<vector<int>> dp(n,vector<int>(n+1,INT_MAX));
          dp[0][1] = triangle[0][0];
          for(int i=1;i<n;i++){

             for(int j = 0;j<triangle[i].size();j++){
                 
                 int mini = min(dp[i-1][j+1],dp[i-1][j]);
                 dp[i][j+1] = mini + triangle[i][j];
             }
          }

    return *min_element(dp[n-1].begin(),dp[n-1].end());

    }
};