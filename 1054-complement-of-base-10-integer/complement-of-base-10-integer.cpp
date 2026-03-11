class Solution {
public:
    int bitwiseComplement(int n) {
        if(n == 0) return 1;
        int res = 0,i=0;
        while(n>0){
            if(n%2 == 0) res += (1<<i);
            i++;
            n/=2;
        }
        return res;
    }
};