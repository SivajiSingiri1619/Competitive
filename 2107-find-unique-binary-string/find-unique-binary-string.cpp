class Solution {
public:
void solve(int len,string& s,string& res,vector<char>& ch,vector<string>& nums){
     if(len == nums.size()){
        if(!(find(nums.begin(), nums.end(), s) != nums.end())){
            res = s;
        }
        return;
     }
     for(int i=0;i<2;i++){
         if(i ==0){
            s.push_back(ch[i]);
            solve(len+1,s,res,ch,nums);
            s.pop_back();
         }
         else{
            s.push_back(ch[i]);
            solve(len+1,s,res,ch,nums);
            s.pop_back();
         }
     }
}
    string findDifferentBinaryString(vector<string>& nums) {
        string s;
        string res="";
        vector<char>ch={'0','1'};
        solve(0,s,res,ch,nums);
        return res;
    }
};