class Solution {
public:
    int minRemoval(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end());
        int n = nums.size();
        if(nums[n-1] <= k) return 0;
        int res = INT_MAX;
        for(int i=n-1;i>=0;i--){
            
             int val = nums[i];
             int rem = nums[i]%k;
             int low = 0,high = i;
             while(low <= high){
                  
                   int mid = (low+high)/2;

                   if((long long) nums[mid] * k >= val) high = mid-1;
                   else low = mid+1;
             }
            //  cout<<low<<" ";
             int dis = (n-(i+1)) + low;
            //  cout<<dis<<" ";
             res = min(res,dis);
        }
        return res;
    }
};