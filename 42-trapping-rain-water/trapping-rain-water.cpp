class Solution {
public:
    int trap(vector<int>& height) {
        
        int Lmax = height[0],Rmax = height[height.size()-1];

        int i=0,j=height.size()-1,res = 0;
        while(i <= j){
             
              if(Lmax > Rmax){
                 res +=max(Rmax-height[j],0);
                 Rmax = max(height[j],Rmax);
                 j--;
              }
              else{
                  res += max(Lmax-height[i],0);
                  Lmax = max(height[i],Lmax);
                  i++;
              }
            //   cout<<Lmax<<" "<<Rmax<<"\n";
        }
        return res;
    }
};