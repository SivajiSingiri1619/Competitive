class Solution {
public:
    vector<string> removeAnagrams(vector<string>& words) {
        
        if(words.size() <= 1) return words;
        vector<string>res;
        res.push_back(words[0]);
        for(int i=1;i<words.size();i++){
            
            string s1 = words[i];
            sort(s1.begin(),s1.end());
            string s2 = res[res.size()-1];
            sort(s2.begin(),s2.end());
            if(s1 != s2) res.push_back(words[i]);
        }
        return res;
    }
};