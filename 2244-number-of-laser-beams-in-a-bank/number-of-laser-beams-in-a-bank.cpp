class Solution {
public:
    int numberOfBeams(vector<string>& bank) {
        int res = 0;
       vector<int>vec;
        for(int i=0;i<bank.size();i++){
            if(count(bank[i].begin(),bank[i].end(),'1') != 0){
            vec.push_back(count(bank[i].begin(),bank[i].end(),'1'));
            }
        } 
        
         if(!vec.empty()){
        for(int i=0;i<vec.size()-1;i++){
           res += vec[i]*vec[i+1];
        }
         }
        return res;
    }
};