class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size() , m = grid[0].size();
        int mod = 12345;
        vector<long long>pref((n*m)+1),suf((n*m) + 1);
        pref[0] = 1;
        int c = 1;
        for(int i=0;i<n;i++){
             for(int j=0;j<m;j++){
                  pref[c] = (long long)(pref[c-1] * grid[i][j]) % mod;
                  c++;
             }
        }
        c=1;
        suf[0] = 1;
        for(int i=n-1;i>=0;i--){
            for(int j=m-1;j>=0;j--){
                suf[c] = (long long)(suf[c-1] * grid[i][j]) % mod;
                c++;
            }
        }

    vector<vector<int>>res(n,vector<int>(m));
      c = 1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                long long ans = 1;
                if(c == 1 || c == (m*n)){

                     if(c==1) ans = suf[(m*n)-1];
                     else ans = pref[c-1];
                }
                else {
                    ans = (pref[c-1] * suf[(m*n) - c]) % mod;
                }
                res[i][j] = ans;
                c++;
            }
        }
        return res;
    }
};