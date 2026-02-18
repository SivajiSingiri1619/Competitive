class Solution {
public:
    int binarySearch(vector<int>& nums,int target,int low,int high){
          
          int mid = low + (high-low)/2;

          if(low > high) return -1;

          else if(nums[mid] == target) return mid;

          else if(nums[low] <= nums[mid]){
             
             if(nums[low] <= target && target <= nums[mid]) return binarySearch(nums,target,low,mid-1);

             else return binarySearch(nums,target,mid+1,high);
          }

          else{
               
               if(nums[mid] <= target && nums[high] >= target) return binarySearch(nums,target,mid+1,high);

               else return binarySearch(nums,target,low,mid-1);
          }
    }

    int search(vector<int>& nums, int target) {
        
          return binarySearch(nums,target,0,nums.size()-1);
        
       

    }  
};