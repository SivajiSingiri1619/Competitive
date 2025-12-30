class Solution {
public:
    long long countSubarrays(vector<int>& nums, int k) {
        int maxi = *max_element(nums.begin(),nums.end());
        long long res = 0;
        int cnt = 0,j=0;
        for(int i=0;i<nums.size();i++){

            if(nums[i] == maxi) cnt++;

            while(cnt >= k){
                res += (nums.size() - i);
                if(nums[j] == maxi) cnt--;
                j++;
            }

        }
        return res;
    }
};