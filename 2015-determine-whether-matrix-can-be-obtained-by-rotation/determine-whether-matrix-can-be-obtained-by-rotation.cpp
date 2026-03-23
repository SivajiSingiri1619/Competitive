class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
        int n = mat.size();
    vector<vector<int>> vec(n,vector<int>(n));
    if(mat == target) return true;
         bool flag = true;
         for(int j=0;j<n;j++){
             int c = 0;
             for(int i=n-1;i>=0;i--){
                 vec[j][c] = mat[i][j];
                 if(target[j][c] != vec[j][c]) flag = false;
                 c++;
             }
         }
         if(flag) return true;
         flag = true;
           for(int j=0;j<n;j++){
             int c = 0;
             for(int i=n-1;i>=0;i--){
                 mat[j][c] = vec[i][j];
                 if(target[j][c] != mat[j][c]) flag = false;
                 c++;
             }
         }
         if(flag) return true;
         flag = true;
           for(int j=0;j<n;j++){
             int c = 0;
             for(int i=n-1;i>=0;i--){
                 vec[j][c] = mat[i][j];
                 if(target[j][c] != vec[j][c]) flag = false;
                 c++;
             }
         }
         if(flag) return true;
         return false;
    }
};