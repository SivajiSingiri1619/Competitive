class Solution {
public:
    int countPartitions(vector<int>& nums) {
        vector<long long>vec;
        long long sum=0;
        for(int i=0;i<nums.size();i++){
            sum += nums[i];
            vec.push_back(sum);
        }
        int res=0;
        for(int i=0;i<nums.size()-1;i++){
            long long temp1=vec[i];
            long long temp2=vec[nums.size()-1]-vec[i];
            if(abs(temp1-temp2)%2 == 0) res++;
         }  
        return res;
    }
};