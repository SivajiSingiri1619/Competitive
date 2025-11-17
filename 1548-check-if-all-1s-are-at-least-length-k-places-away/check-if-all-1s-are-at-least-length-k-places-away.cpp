class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int dis = 0;
        bool flag = false;
        for(int i=0;i<nums.size();i++){
            if(nums[i] == 1 ){
                if(dis >= k || !flag) dis = 0;
                else return false;
                flag = true;
            }
            else dis++;
        }
        return true;
    }
};