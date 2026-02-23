class Solution {
public:
    int binaryGap(int n) {
        bool flag = false;
        int cnt = 1,res = 0;
        while(n > 0){
              
              if(n%2 == 1){
                  if(flag) res = max(cnt,res);
                  flag = true;
                  cnt = 1;
              }
              else cnt++;

              n/=2;
        }
        return res;
    }
};