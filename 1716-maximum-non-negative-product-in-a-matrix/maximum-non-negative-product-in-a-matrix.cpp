class Solution {
public:
    int maxProductPath(vector<vector<int>>& grid) {
        
         int  m = grid.size() , n = grid[0].size();
         long long mod = 1e9+7;
         vector<vector<long long>>dpMx(m,vector<long long>(n)),dpMn(m,vector<long long>(n));
         dpMx[0][0] = dpMn[0][0] = grid[0][0];
         for(int c=1;c<n;c++) dpMx[0][c] = dpMn[0][c] = dpMx[0][c-1] * grid[0][c];
         for(int r=1;r<m;r++) dpMx[r][0] = dpMn[r][0] = dpMx[r-1][0] * grid[r][0];

         for(int r=1;r<m;r++){
             for(int c=1;c<n;c++){
                  long long mx1 = (long long)dpMx[r-1][c] * grid[r][c];
                  long long mx2 = (long long) dpMx[r][c-1] * grid[r][c];

                  long long mn1 = (long long)dpMn[r-1][c] * grid[r][c];
                  long long mn2 = (long long)dpMn[r][c-1] * grid[r][c];

                  dpMx[r][c] = max({mx1,mx2,mn1,mn2});
                  dpMn[r][c] = min({mx1,mx2,mn1,mn2});
             }
         }
        
         long long ans = dpMx[m-1][n-1];
         if(ans < 0) return -1;
         return ans % mod;
    }
};