class Solution {
public:

    string multiply(string num1, string num2) {
        
          int m = num1.size(),n=num2.size();
          vector<vector<int>>vec(n,vector<int>(n+m,0));
          reverse(num1.begin(),num1.end());
          reverse(num2.begin(),num2.end());
          for(int i=0;i<n;i++){
             int rem = 0,k=i;
             for(int j=0;j<m;j++){
                 vec[i][k] = (((num2[i]-'0') * (num1[j]-'0')) + rem) % 10;
                //  cout<<vec[i][k]<<"-";
                 rem = (((num2[i]-'0') * (num1[j]-'0')) + rem) / 10;
                 k++;
             }
             if(rem != 0) vec[i][k] = rem;
            //  cout<<"\n";
          }
        //   cout<<"jj"<<"\n";
          string res = "";
          int rem = 0;
          for(int j=0;j<n+m;j++){
             int col_sum = 0;
             for(int i=0;i<n;i++){
                 col_sum += vec[i][j];
               
             }
             cout<<col_sum<<"--";
             col_sum += rem;
             res = to_string(col_sum % 10) + res;
             rem = col_sum / 10;
             
          }
          if(rem != 0) res = to_string(rem) + res;
          int idx = 0;
          for(idx = 0;idx<res.size();idx++){
             if(res[idx] != '0') break;
          }
          res.erase(res.begin(),res.begin()+idx);
          if(res == "") return "0";
          return res;
    }
};