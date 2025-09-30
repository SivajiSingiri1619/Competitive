class Solution {
public:
    int triangularSum(vector<int>& nums) {
        
        int k = nums.size()-1;

        while(k>=0){

            for(int i=0;i<k;i++){
                int newSum = (nums[i] + nums[i+1])%10;
                nums[i] = newSum;
            }
            k--;
        }
       return nums[0];
    }
};