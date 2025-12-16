class Solution {
public:
    int factorial(int n){
         int mod = 1e9+7;
         long long tot = 1;
         for(int i=1;i<=n;i++){
            tot = (tot * i)%mod;
         }
         return tot%mod;
    }
    int countPermutations(vector<int>& complexity) {
        int mini = *min_element(complexity.begin(),complexity.end());
        
        int cnt = count(complexity.begin(),complexity.end(),mini);
        if(cnt == 1 && complexity[0] == mini) return factorial(complexity.size()-1);
        return 0;
    }
};