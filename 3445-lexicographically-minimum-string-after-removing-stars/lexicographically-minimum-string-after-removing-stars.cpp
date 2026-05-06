class Solution {
public:
    string clearStars(string s) {
        map<char,vector<int>>mp;
        vector<int>rem_ind;
       
for(int i=0;i<s.size();i++){

        if(s[i] == '*'){

            rem_ind.push_back(mp.begin()->second.back());
            rem_ind.push_back(i);

            mp.begin()->second.pop_back();

            if(mp.begin()->second.empty()){
                mp.erase(mp.begin()->first);
            }
        }
        else{
            mp[s[i]].push_back(i);
        }
}
        sort(rem_ind.begin(),rem_ind.end());
        int j = 0;
        string res = "";
        for(int i=0;i<s.size();i++){
            if(j < rem_ind.size() && i == rem_ind[j]){
                 j++;
                 continue;
            }
            res += s[i];
        }
       return res;
    }
};