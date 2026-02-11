class Solution {
public:
    bool isStrictlyPalindromic(int n) {
        
          for(int i=2;i<=n-2;i++){
              string s1="",s2="";
              int temp = n;
              while(temp > 0){
                  s1 += to_string(temp%i);
                  s2 = to_string(temp%i) + s2;
                  temp/=i;
              }
              if(s1 != s2) return false;
              
          }
          return true;
    }
};