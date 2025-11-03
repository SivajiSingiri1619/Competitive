class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        
         int res = 0;
         bool flag = false;
         int val;
         for(int i=0;i<colors.size()-1;i++){
             
              if(colors[i] == colors[i+1]){
                  
                   if(flag){
                      res += min(val,neededTime[i+1]);
                      val = max(val,neededTime[i+1]);
                   }
                   else{
                   flag = true;
                   res += min(neededTime[i],neededTime[i+1]);
                   val = max(neededTime[i],neededTime[i+1]);
                   }
              }
              else{
                flag = false;
              }
         }
         return res;
    }
};