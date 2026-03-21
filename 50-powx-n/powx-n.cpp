class Solution {
public:
    double power(double x,long long n){
         
          if(n == 0) return 1;
          if(n == 1) return x;

          if(n%2 == 0) return power(x * x,n/2);
          else return x * power(x,n-1);
    }
    double myPow(double x, int n) {
           if(x == 1 || x == 0) return x;
           long long num = n;
           if(n < 0) return (double)(1.00/power(x,abs(num)));
           return power(x,num);
    }
};