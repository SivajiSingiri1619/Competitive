class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        
         long long res = 0;
         int mini = INT_MAX,cnt=0;;
         for(int i=0;i<matrix.size();i++){
            for(int j=0;j<matrix[i].size();j++){
                 
                 if(matrix[i][j] < 0){
                     res += (matrix[i][j] * -1);
                     mini = min(mini,matrix[i][j] * -1);
                     cnt++;
                 }
                 else{
                    res += matrix[i][j];
                    mini = min(mini,matrix[i][j]);
                 }
            }
         }
         if(cnt%2 != 0 && cnt != 0){
            res -= mini;
            res -= mini;
         }
         return res;
    }
};