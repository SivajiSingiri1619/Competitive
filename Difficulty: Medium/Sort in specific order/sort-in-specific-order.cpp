class Solution {
  public:
    void sortIt(vector<int>& arr) {
        // code here
        
         int i=0,j=arr.size()-1;
         while(i<j){
             
              if(arr[i]%2 == 0 && arr[j]%2 != 0){
                   swap(arr[i],arr[j]);
                 i++,j--;
              }
              
              else if(arr[i]%2 != 0) i++;
              else if(arr[j]%2 == 0) j--;
              else {
                  i++;
                  j--;
              }
         }
         
        i=0;
        while(i < arr.size() && arr[i] % 2 != 0) i++;
        
        sort(arr.begin(),arr.begin()+i,greater<int>());
        sort(arr.begin()+i,arr.end());
    }
};