class Solution {
  public:
    vector<int> nextGreater(vector<int> &arr) {
        // code here
        stack<pair<int,int>> st;
        vector<int> res(arr.size(),-1);
        
        for(int i=0;i<arr.size();i++){
            
            if(st.empty()) st.push({arr[i],i});
            else{
                
                while(!st.empty() && st.top().first < arr[i]){
                    
                       res[st.top().second] = arr[i];
                       st.pop();
                }
                st.push({arr[i],i});
                
            }
            
        }
        
        if(!st.empty()){
            
           for(int i=0;i<arr.size();i++){
               
                if(st.empty()) break;
                
               while(!st.empty() && st.top().first < arr[i]){
                   res[st.top().second] = arr[i];
                   st.pop();
               }
           }
        }
        return res;
    }
};