class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) {
        
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            if(nums[i] < 0) mp[((nums[i]%value)+value)%value]++;
            else mp[nums[i]%value]++; 
        }
        for(int i=0;i<value;i++){
            if(mp[i] == 0) return i;
        }

        int temp = 0,mini = nums.size()+1;

        for(auto i:mp){

            if(i.second < mini){
                mini = i.second;
                temp = i.first;
            }
        }
        return (temp+(value*(mini-1))+value);
    }
};