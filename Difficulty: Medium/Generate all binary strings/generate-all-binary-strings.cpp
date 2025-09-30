class Solution {
  public:
    string binary_str(int n,int size){
        string res = "";
         while(n>0){
             res = to_string(n%2) + res;
             n /= 2;
         }
         
         while(res.size() < size){
             res = "0" + res;
         }
         return res;
    }
    vector<string> binstr(int n) {
        // code here
        
        
        int  k = pow(2,n);
        vector<string>res;
        
        for(int i=0;i<k;i++){
            
            res.push_back(binary_str(i,n));
        }
        return res;
    }
};