class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
        int m = grid.size(),n = grid[0].size();
        vector<vector<long long>>horz(m,vector<long long>(n)),vert(m,vector<long long>(n));
        long long tot = 0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                 
                 tot += grid[i][j];
                 horz[i][j] = tot;

            }
        }
        cout<<tot<<" ";
        for(int i=0;i<m;i++){   
             if(horz[i][n-1] == (horz[m-1][n-1] -horz[i][n-1] )) return true;
        }

       tot = 0;
       for(int i = 0;i<n;i++){
            for(int j=0;j<m;j++){
                  tot += grid[j][i];
                  vert[j][i] = tot;
            }
       }
        cout<<tot<<" ";
       for(int j=0;j<n;j++){
           if(vert[m-1][j] == (vert[m-1][n-1] - vert[m-1][j])) return true;
       }

       return false;
    }
};