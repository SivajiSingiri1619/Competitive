class Solution {
public:
    int totalMoney(int n) {
         
         int rem = n%7;
         int div = n/7;
         int ans = (div*28) + (((div+rem)*(div+rem+1))/2 - ((div*(div+1))/2));
         div=div-1;;
         while(div>0){
             ans += (div*7);
             div--;
         }
         return ans;
    }
};