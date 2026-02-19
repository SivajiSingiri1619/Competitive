class Solution {
  public:
    vector<int> missinRange(vector<int>& arr, int low, int high) {
        // code here
        sort(arr.begin(),arr.end());
        vector<int>res;
        for(int i=low;i<=high;i++){
             
             int idx = lower_bound(arr.begin(),arr.end(),i) - arr.begin();
             if(idx < arr.size() && arr[idx] == i) continue;
             res.push_back(i);
             
        }
        return res;
    }
};