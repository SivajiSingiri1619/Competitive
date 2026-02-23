class Solution {
public:
    int to_bin(string s){
        int res = 0;
        for(int i=0;i<s.size();i++){
             if(s[i] == '1') res += (1<<i);
        }
         return res;
    }
    bool hasAllCodes(string s, int k) {
        if(s.size() < k) return false;
        map<int,int>mp;
        string str = "";
        int i=0;
        for(int j=0;j<s.size();j++){
             str = s[j] + str;
             if((j-i)+1 == k){
                 int val = to_bin(str);
                 mp[val]++;
                 str.pop_back();
                 i++;
             }
        }
        if(mp.size() == (1<<k)) return true;
        else return false;
    }
};