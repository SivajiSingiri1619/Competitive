class Solution {
public:
    int longestBalanced(vector<int>& nums) {
         int maxi = 0;
       for(int i=0;i<nums.size();i++){
            map<int,int>mp;
            int even = 0,odd=0;
           for(int j=i;j<nums.size();j++){
              
               if(mp[nums[j]] == 0 && nums[j]%2 == 0 && nums[j] != 1){
                  mp[nums[j]]++;
                  even++;
               }
               else if(mp[nums[j]] == 0 && (nums[j]%2 != 0 || nums[j] == 1)){
                  mp[nums[j]]++;
                  odd++;
               }
              if(odd == even){
              maxi = maxi > (j-i)+1 ? maxi:(j - i)+1;
               }
           }
         
       }
       return maxi;
    }
};