class Solution {
public:
    int countValidSelections(vector<int>& nums) {
        
           int n = nums.size();
        vector<int> pre(n);
        pre[0] = nums[0];
        for (int i = 1; i < n; i++)
            pre[i] = pre[i - 1] + nums[i];

        int total = pre[n - 1];
        int res = 0;

       for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                int leftSum = (i > 0) ? pre[i - 1] : 0;
                int rightSum = total - pre[i];
                    if (leftSum == rightSum) {
                    res += 2;
                }
                else if (abs(leftSum - rightSum) == 1) {
                    res += 1;
                }
         }
       }
        return res;
    }
};