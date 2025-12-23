class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        // code here
        int i=0,sum_k=0,res=INT_MIN;
        for(int j=0;j<arr.size();j++){
              sum_k += arr[j];
              if(j - i + 1 == k){
                  res = max(sum_k,res);
                  
                  sum_k -= arr[i++];
              }
        }
        
        return res;
    }
};