class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        
        int empt = 0,cnt=0;
        int n = numBottles;
        while(n/numExchange > 0){
             
              cnt += (n/numExchange);
              int div = n - ((n/numExchange) * numExchange);
              n = (n/numExchange) + div;
        }
        return numBottles + cnt;
    }
};