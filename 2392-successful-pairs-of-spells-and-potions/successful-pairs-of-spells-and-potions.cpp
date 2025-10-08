class Solution {
public:
   int binary_search(vector<int>& vec,int low,int high,long long &sucess,int &spell){
             int mid = (low+high)/2;
              if(low > high) return (mid);

              if((long long)vec[mid]*spell >= sucess) return binary_search(vec,low,mid-1,sucess,spell);
              else return binary_search(vec,mid+1,high,sucess,spell);

   }
    vector<int> successfulPairs(vector<int>& spells, vector<int>& potions, long long success) {
        
        vector<int>res;
        int n = potions.size()-1;
        sort(potions.begin(),potions.end());
        for(int i=0;i<spells.size();i++){
            int idx = binary_search(potions,0,potions.size()-1,success,spells[i]);
            if((long long)spells[i] * potions[idx] >= success) res.push_back((n-idx)+1);
            else res.push_back(n-idx);
        }
        return res;
    }
};