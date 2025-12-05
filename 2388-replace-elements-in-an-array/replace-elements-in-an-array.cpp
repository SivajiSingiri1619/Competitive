class Solution {
public:
    vector<int> arrayChange(vector<int>& nums, vector<vector<int>>& operations) {
        
        map<int,int>mp;
        for(int i=0;i<nums.size();i++) mp[nums[i]] = i;

        for(int i=0;i<operations.size();i++){

            if(mp[operations[i][0]]){

                nums[mp[operations[i][0]]] = operations[i][1];
                mp[nums[mp[operations[i][0]]]] = mp[operations[i][0]];
            }
            else{

                if(nums[mp[operations[i][0]]] == operations[i][0]){
                    nums[mp[operations[i][0]]] = operations[i][1];
                    mp[nums[mp[operations[i][0]]]] = mp[operations[i][0]];
                }
            }
        }
        return nums;
    }
};