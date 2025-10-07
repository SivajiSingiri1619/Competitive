class Solution {
public:
    vector<int> avoidFlood(vector<int>& rains) {
        int n = rains.size();
        map<int,int>mp;
        vector<int>vec;
        vector<int>res(n,-1);

        for(int i=0;i<n;i++){

            if(mp[rains[i]] == 0 && rains[i] != 0) mp[rains[i]] = i+1;

            else if(rains[i] == 0) vec.push_back(i);

            else if(mp[rains[i]] != 0 && vec.size() > 0){
                   bool flag = false;
                   for(int j=0;j<vec.size();j++){
                    cout<<vec[j]<<" ";
                       if(vec[j] > (mp[rains[i]]-1)){
                           res[vec[j]] = rains[i];
                           vec.erase(vec.begin()+j);
                           mp[rains[i]] = i+1;
                           flag = true;
                           break;
                       }
                       
                   }

                cout<<" is "<<mp[rains[i]]<<endl;
                if(!flag) return {};

               

            }
            else return {};
        }
        
        if(vec.size() > 0){
            for(int i=0;i<vec.size();i++){
                res[vec[i]] = 1;
            }
        }
        return res;
    }
};