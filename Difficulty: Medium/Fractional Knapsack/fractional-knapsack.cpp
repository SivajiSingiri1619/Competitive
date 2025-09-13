class Solution {
  public:
  static bool comp(const pair<int,int> &a,const pair<int,int> &b){
         
          double frac1 = (double)((a.second * 1.0)/a.first);
          double frac2 =(double)((b.second * 1.0)/b.first);
          
          return frac1 > frac2;
   }
    
    double fractionalKnapsack(vector<int>& val, vector<int>& wt, int capacity) {
        // code here
        
        vector<pair<int,int>> vp;
        
        for(int i=0;i<val.size();i++) vp.push_back({wt[i],val[i]});
        
        sort(vp.begin(),vp.end(),comp);
        
        double res = 0.00;
        for(auto i:vp){
            
            if(i.first <= capacity){
                res += i.second;
                capacity -= i.first;
            }
            else if(i.first > capacity){
                res = res + ((capacity * 1.0) * (double)(((i.second * 1.0)/i.first)));
                break;
            }
        }
        return res;
    }
};
