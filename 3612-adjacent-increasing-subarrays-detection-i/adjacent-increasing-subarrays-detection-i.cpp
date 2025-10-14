class Solution {
public:
    bool hasIncreasingSubarrays(vector<int>& nums, int k) {
        
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
         cout<<cnt;
         return false;
    }
};