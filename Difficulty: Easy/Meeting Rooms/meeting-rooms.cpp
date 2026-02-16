class Solution {
  public:
    bool canAttend(vector<vector<int>> &arr) {
        // Code Here
        sort(arr.begin(),arr.end());
        
        int prev = arr[0][1];
        for(int i=1;i<arr.size();i++){
            
             if(arr[i][0] >= prev) prev = arr[i][1];
             else return false;
        }
        return  true;
    }
};