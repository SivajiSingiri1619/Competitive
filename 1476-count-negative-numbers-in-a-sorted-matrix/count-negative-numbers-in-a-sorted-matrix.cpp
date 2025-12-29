class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int res = 0;
        int n = grid[0].size();
        for(int i=0;i<grid.size();i++){
            int low = 0,high = n-1;
            while(low <= high){
                 int mid = (low+high)/2;

                 if(grid[i][mid] < 0){
                    high = mid - 1;
                 }
                 else low = mid+1;
            }
            if(low < n) res += (n-low);
        }
        return res;
    }
};