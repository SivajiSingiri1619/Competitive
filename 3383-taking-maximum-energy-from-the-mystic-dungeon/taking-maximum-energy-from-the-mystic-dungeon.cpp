class Solution {
public:
    int maximumEnergy(vector<int>& energy, int k) {
        map<int,int>mp;
        for(int i=0;i<k;i++) mp[i] = energy[i];
        int maxi = INT_MIN;
        for(int i=0;i<energy.size() && i+k <= energy.size()-1;i++){
          
            mp[i+k] = max(mp[i] + energy[i+k],energy[i+k]);
        }
        int j = energy.size()-1,i=0;
        while(i<k){
            maxi = max(mp[j],maxi);
            j--;
            i++;
        }
        return maxi;
    }
};