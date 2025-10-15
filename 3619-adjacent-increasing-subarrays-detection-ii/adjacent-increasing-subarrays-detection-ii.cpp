class Solution {
public:
     bool find_k(vector<int>& nums, int k) {
        
         int i=0,j=k;
         bool flag = false;
         int cnt = 1;
          
         while(i < j && j < nums.size()-1){

             if(cnt == k)  return true;
             if(nums[i] < nums[i+1] && nums[j] < nums[j+1]){
                cnt++;
             }
             else cnt = 1;
             i++;
             j++;
         }
         if(cnt == k) return true;
         return false;
     }
    int maxIncreasingSubarrays(vector<int>& nums) {
        
         int low = 1,high = nums.size()/2;
         
         while(low <= high){

              int mid = (low+high)/2;
              if(find_k(nums,mid)) low = mid+1;
              else high = mid-1;
              cout<<high<<" ";
         }
         return high;
    }
};