class Solution {
public:
    int nthMagicalNumber(int n, int a, int b) {
        long long low = min(a,b);
        long long high = (long long)(n * low);
        long long aob = (long long)((a*b)/__gcd(a,b));
        while(low <= high){
             
              long long mid = low + (high - low)/2;

              long long ad = (long long)mid/a;
              long long bd = (long long)mid/b;
              long long val = (long long)(ad+bd - (mid/aob));

              if(val < n) low = mid+1;
              else high = mid-1;
        }
        return low%int(1e9+7);
    }
};