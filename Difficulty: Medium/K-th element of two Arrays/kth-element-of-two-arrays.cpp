class Solution {
  public:
    int kthElement(vector<int> &a, vector<int> &b, int k) {
        // code here
        int i=0,j=0;
        int a1 = a.size(),b1=b.size();
        vector<int>vec;
        while(i<a1 && j <b1){
             
              if(a[i] < b[j]){
                  vec.push_back(a[i++]);
              }
              else{
                  vec.push_back(b[j++]);
              }
        }
        if(i < a1) while(i < a1) vec.push_back(a[i++]);
        else while(j < b1) vec.push_back(b[j++]);
        
        return vec[k-1];
    }
};