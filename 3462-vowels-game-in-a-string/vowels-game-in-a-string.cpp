class Solution {
public:
    bool doesAliceWin(string s) {
        
        string vowel = "aeiou";
        int cnt = 0;
        for(int i=0;i<s.size();i++){
            
            if(find(vowel.begin(),vowel.end(),s[i]) != vowel.end()) cnt++;
        }
        if(cnt == 0) return false;
        return true;
    }
};