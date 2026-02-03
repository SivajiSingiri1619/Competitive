class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(nums[0] >= nums[1] || nums[n-2] >= nums[n-1] || n <= 3) return false;

           bool  flag = false;
        for(int i=0;i<n-1;i++) {
            if(nums[i] == nums[i+1]) return false;
            if(nums[i] > nums[i+1]){
                if(!flag){
                    while(i < n-1){
                        flag  = true;
                        if( nums[i] < nums[i+1]) break;
                        if(nums[i] == nums[i+1]) return false;
                        i++;
                    }
                }
                else return false;
            }
        }

        return flag;
    }
};