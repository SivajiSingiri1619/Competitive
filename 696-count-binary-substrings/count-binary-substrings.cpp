class Solution {
public:
    int countBinarySubstrings(string s) {
        
        char prev = s[0];
        int zero = 0,one=0,res=0;
        if(prev == '0') zero++;
        else one++;
        for(int i=1;i<s.size();i++){
             
              if(s[i] == '0'){
                   if(prev == '0') zero++;
                   else{
                       res += min(zero,one);
                       prev = s[i];
                       zero = 1;
                   }
              }
              else{
                   if(prev == '1') one++;
                   else{
                      res += min(zero,one);
                      one = 1;
                      prev = s[i];
                   }
              }
        }
        return res+min(zero,one);
    }
};