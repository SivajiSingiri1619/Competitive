class Solution {
  public:
    int minPlatform(vector<int>& arr, vector<int>& dep) {
        // code here
        vector<int>min_plat(2361,0);
        
        for(int i=0;i<arr.size();i++){
             
              min_plat[arr[i]] += 1;
              min_plat[dep[i]+1] -= 1;
        }
        
        int res = INT_MIN,sum=0;
        for(int i=0;i<min_plat.size();i++){
             sum += min_plat[i];
             
             res = max(sum,res);
        }
        return res;
    }
};
