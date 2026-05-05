class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.size() == 0) return {-1,-1};
        int first = -1 , last = -1;
        int l = 0 , h = nums.size() - 1;
        while(l <= h){
             int mid = (l+h)/2;
             
             if(nums[mid] < target) l = mid+1;
             else h = mid - 1;
        }
        if(l <= nums.size()-1 && nums[l] == target) first = l;
        l=0;
        h=nums.size()-1;
        while(l <= h){
            int mid = (l+h)/2;

            if(nums[mid] <= target) l = mid+1;
            else h = mid - 1;
        }
        if(h >= 0 && nums[h] == target) last = h;
        return {first,last};
    }
};