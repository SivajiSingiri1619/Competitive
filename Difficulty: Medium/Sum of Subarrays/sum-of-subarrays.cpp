class Solution {
  public:
    int subarraySum(vector<int>& arr) {
        // code here
        int n = arr.size();
        int res = 0;
        int i=0,j=n-1;
        int t = n,curr=0;
        while(i < n){
            curr = (curr-i) + (n-i);
            res += (arr[i] * (curr));
            i++;
        }
        
        return res;
        
    }
};