class Solution {
public:
    bool hasAlternatingBits(int n) {
        
         bool flag = false;
         for(int i=0;i<31;i++){
             
              if(n < (1<<i)) break;
              if(n & (1<<i)) {
                 if(!flag || i==0) flag = true;
                 else return false;
              }
              else {
                 if(flag || i==0)  flag  = false;
                 else return false;
              }
    }
    return true;
    }
};