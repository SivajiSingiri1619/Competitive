class Solution {
public:
    int numSub(string s) {
        long long cnt = 0,res = 0,modl=1e9+7;
        for(int i=0;i<s.size();i++){
            if(s[i] == '0'){
                res += ((cnt * (cnt+1))/2);
                res %=modl;
                cnt = 0;
            }
            else cnt++;
        }

        res += ((cnt * (cnt+1))/2);
        return res%modl;
    }
};