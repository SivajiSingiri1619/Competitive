class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int tot = 0;
        for(auto i:nums) tot += i;
        return tot%k;
    }
};