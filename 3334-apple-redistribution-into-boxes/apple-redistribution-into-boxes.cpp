class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        
         sort(capacity.begin(),capacity.end());
         int min_box = 0;
         int tot_apples = accumulate(apple.begin(),apple.end(),0);

         for(int i=capacity.size()-1;i>=0;i--){

             if(tot_apples <= 0) break;

             tot_apples -= capacity[i];
             min_box++;
         }
         return min_box;
    }
};