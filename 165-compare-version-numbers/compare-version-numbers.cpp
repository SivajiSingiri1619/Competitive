class Solution {
public:
    int compareVersion(string version1, string version2) { 

         string v1 = "0",v2 = "0";
         int i=0,j=0;

         while(i < version1.size() || j < version2.size()){
              string v1 = "0",v2 = "0";
              if(i < version1.size()){
                 
                 while(i < version1.size()){
                     
                     if(version1[i] != '.') v1 += version1[i];
                     else break;
                     i++;
                 }
                 i++;
              }

              if(j < version2.size()){
                 int k;
              
                 while(j < version2.size()){
                     if(version2[j] != '.') v2 += version2[j];
                     else break;
                     j++;
                 }
                 j++;
              }
             cout<<v1<<" "<<v2<<endl;
              int r1 = stoi(v1);
              int r2 = stoi(v2);
              if(r1 < r2) return -1;

              else if(r1 > r2) return 1;
         }

          int r1 = stoi(v1);
          int r2 = stoi(v2);
          if(r1 < r2) return -1;
          else if(r1 > r2) return 1;
          return 0;
    }
};