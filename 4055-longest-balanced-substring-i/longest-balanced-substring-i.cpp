class Solution {
public:
    int longestBalanced(string s) {
       
       int res = 0;
       for(int i=0;i<s.size();i++) {
           map<char,int>mp;
           int len = 0;
           string sub = "";
           set<char>st;

          for(int j=i;j<s.size();j++){
              sub += s[j];
              mp[s[j]]++;
              bool flag = true;
             int frq = mp[s[j]];

             for(auto i:mp){
                 if(i.second != frq){
                     flag = false;
                    break;
                 }
             }
             if(flag) len = sub.size();

          }
          res = max(res,len);

       }
       return res;
    }
};