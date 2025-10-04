class Solution {
public:
    int maxArea(vector<int>& height) {
        
         int i=0,j=height.size()-1;
         int maxi = INT_MIN;
         while(i<j){
             int curr = (j-i) * min(height[j],height[i]);
             if(height[i] <= height[j]) i++;
             else j--;

             maxi = max(maxi,curr);
              
         }
         return maxi;
    }
};