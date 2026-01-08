class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long X=0;
        for(int i=0;i<nums.size();i++){
            X=X^nums[i];
        }
        long res=(X&(X-1))^X;
        long b1=0,b2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]&res) b1=b1^nums[i];
            else b2=b2^nums[i];
        }
        vector<int>arr;
        arr.push_back(b1);
        arr.push_back(b2);
        return arr;
    }
};