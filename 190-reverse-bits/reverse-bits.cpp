class Solution {
public:
    int reverseBits(int n) {
        string bin = "";
        int k = 31,res=0;
        while(n > 0){
            if(n%2 == 1) res += pow(2,k);
             n/=2;
             k--;
        }
       
        return res;
    }
};