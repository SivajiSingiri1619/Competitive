class Solution {
public:
    int check_of(int n){
         int cnt = 0;
         int tot = 0;
         vector<int>vec;
         for(int i=2;i<=n/2;i++){
              if(n%i == 0){
                 vec.push_back(i);
                 cnt++;
              }

              if(cnt == 3) return 0;
         }

         if(cnt == 2){
            if(n%2 == 0) tot = (3+n) + (n/2) + tot;
            else{
                tot = tot + vec[0] + vec[1] + (n+1);
            }
         }
         return tot;
    }
    int sumFourDivisors(vector<int>& nums) {
        
         int res = 0;
         for(int i=0;i<nums.size();i++){
             res += check_of(nums[i]);
         }
         return res;
    }
};