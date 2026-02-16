class Solution {
public:
    int reverseBits(int n) {
        string bin = "";
        while(n > 0){
             bin += to_string(n%2);
             n/=2;
        }
       
        while(bin.size() < 32){
             bin += "0";
        }
        int res = 0,k=0;
        for(int i=bin.size()-1;i>=0;i--){
            if(bin[i] == '1') res += pow(2,k);
            k++;
        }
        return res;
    }
};