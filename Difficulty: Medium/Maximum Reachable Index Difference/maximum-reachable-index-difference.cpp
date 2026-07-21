class Solution {
  public:
    int maxIndexDifference(string &s) {
        // code here
         unordered_map<char,vector<int>>mp;
         bool flag = false;
         int ind;
         for(int i=0;i<s.size();i++){
             
             if(s[i] != 'a') mp[s[i]].push_back(i);
             
             if(s[i] == 'a' && !flag){
                 ind = i;
                 flag = true;
             }
             
         }
         
         if(!flag) return -1;
         int ans = 0;
         char ch = 'b';
         
        //  cout<<ind<<" ";
         vector<int> vec;
         for(int i=s.size()-1;i>ind;i--){
             
               char ch = s[i];
               if(ch == 'a') continue;
               ch--;
               int temp = i;
               bool curr = true;
                while(ch != 'a' ){
                     
                        if(mp.find(ch) != mp.end()){
                        
                          auto it = lower_bound(mp[ch].begin(), mp[ch].end(), temp);
                           int ele;
                            
                                if(it != mp[ch].begin()) {
                                    ele = *(it - 1);   
                                }
                                else {
                                    ele = mp[ch][0];
                                }
                        //   cout<<ele<<" ";
                          if(ele > temp || ind > ele) break;
                          ch--;
                          temp = ele;
                      }
                      else break;
                }
                if(ch == 'a') return i - ind;
         }
         return 0;
         
    }
};
