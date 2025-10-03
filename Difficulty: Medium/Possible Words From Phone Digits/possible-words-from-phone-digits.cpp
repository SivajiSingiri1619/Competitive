class Solution {
  public:
    vector<string> possibleWords(vector<int> &arr) {
        // code here
        vector<string> keypad = { "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        vector<string>res;
        for(int i=0;i<arr.size();i++){
            if(arr[i] <= 1) continue;
            vector<string>temp;
            string keys = keypad[arr[i]-2];
            
            if(res.empty()){
                
                for(char c:keys){
                    temp.push_back(string(1,c));
                }
            }
            else{
                
                 for(string s:res){
                     
                     for(char c:keys){
                         temp.push_back(s+c);
                     }
                 }
            }
            res = temp;
             
        }
        return res;
    }
};