class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        
        int i=0,one=0,res = 0,k=0,j=nums.size()-1;
        for(int i=0;i<nums.size();i++) if(nums[i] == 1) k++;
        i=0;
        
        if(k == 0) return 0;
        while(i<k){
            if(nums[j--] == 1) one++;
            i++;
        }
        i=0;
        j++;
        while(i<nums.size()){
             
             res = max(res,one);
             if(nums[j] == 1) one--;

             if(nums[i] == 1) one++;

             
             j++;
             if(j == nums.size()) j=0;
             i++;
        }
        
        return k-res;
    }
};