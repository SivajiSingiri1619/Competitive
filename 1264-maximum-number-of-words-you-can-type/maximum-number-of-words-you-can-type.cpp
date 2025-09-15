class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        
        stringstream ss(text);
        string word;
        vector<string> vec;
        while(ss >> word){
             vec.push_back(word);
        }

        int res = 0;
        for(auto str:vec){
            
            if(!(str.find_first_of(brokenLetters) != string::npos)) res++;
        }
        return res;

    }
};