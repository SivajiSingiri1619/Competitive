class Solution {
public:
    int countDays(int days, vector<vector<int>>& meetings) {
        
         sort(meetings.begin(),meetings.end());

         int res = 0;
         res += meetings[0][0] - 1;
         for(int i=0;i<meetings.size()-1;i++){
             if(meetings[i][1] < meetings[i+1][0]){
                 res += ((meetings[i+1][0] - meetings[i][1]) - 1);
             }
             else {
                 if(meetings[i][1] > meetings[i+1][1])  meetings[i+1][1] = meetings[i][1];
             }
         }
         res += (days - meetings[meetings.size()-1][1]);
         return res;
    }
};