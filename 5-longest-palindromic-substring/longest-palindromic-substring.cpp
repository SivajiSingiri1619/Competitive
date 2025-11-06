class Solution {
public:

    string longestPalindrome(string s) {
        string res = "";
        for(int i=0;i<s.size();i++){
             string curr = "";
             for(int j=i;j<s.size();j++){
                 
                 curr +=  s[j];
                 
                 int k = curr.size()/2 , l = curr.size()/2;
                 if(curr.size() % 2 != 0){
                     k -= 1;
                     l += 1;
                 }
                 else{
                      k -= 1;
                 }

                 bool flag = true;
                 while( k >= 0 && l < curr.size()){
                     if(curr[k] != curr[l]){
                        flag = false;
                        break;
                     }
                     k--;
                     l++;
                 }

                 if(flag && curr.size() > res.size()) res = curr;

                 if(res.size() >= s.size() - i) break;

             }
        }
        return res;
        
    }
};