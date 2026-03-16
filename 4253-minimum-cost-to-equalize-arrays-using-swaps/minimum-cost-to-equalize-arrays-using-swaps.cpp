class Solution {
public:
    int minCost(vector<int>& nums1, vector<int>& nums2) {
        
        
         map<int,int>mp1,mp2;
         for(int i=0;i<nums1.size();i++){
            mp1[nums1[i]]++;
            mp2[nums2[i]]++;
         }
         int cnt1 = 0,cnt2=  0;
         for(auto i:mp1){
            
             if((mp2[i.first] + i.second) % 2 != 0) return -1;

             if(mp2[i.first] != i.second){
                 
                  int curr = mp2[i.first] + i.second;
                  if((curr/2) < i.second) cnt1 += (i.second - (curr/2));         
             }
         }
          for(auto i:mp2){
            
             if((mp1[i.first] + i.second) % 2 != 0) return -1;

             if(mp1[i.first] != i.second){
                int curr = mp1[i.first] + i.second;
                if((curr/2) < i.second) cnt2+= (i.second - (curr/2));   
             }
         }

         return min(cnt1,cnt2);
    }
};