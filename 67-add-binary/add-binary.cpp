class Solution {
public:
    
    string addBinary(string a, string b) {
        string res = "";
        int cary = 0;
        int i=a.size()-1,j=b.size()-1;
        while(1){
             if(i >= 0 && j >= 0){
                 
                 res = to_string(((a[i] - '0') + (b[j] - '0') + cary) % 2) + res;
                 cary = (((a[i] - '0') + (b[j] - '0') + cary) / 2);
                 i--;
                 j--;
             }
             else if(i >= 0){
                 res = to_string(((a[i] - '0') + cary)%2) + res;
                 cary =( (a[i] - '0') + cary) / 2;
                 i--;
             }
             else if( j >=0 ){
                 res = to_string(((b[j] - '0') + cary)%2) + res;
                 cary =( (b[j] - '0') + cary) / 2;
                 j--;
             }
             else break;
            
        }
        if(cary != 0) res = to_string(cary)+res;
        return res;
    }
};