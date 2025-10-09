class Solution {
public:
    long long minTime(vector<int>& skill, vector<int>& mana) {
        
        vector<long long>vec(skill.size()+1,0);
        for(int i=0;i<mana.size();i++){
            int curr = mana[i];
            vec[0] = vec[1];
            for(int i=0;i<skill.size();i++){
                  if(i<skill.size()-1)  vec[i+1] = max(vec[i+2],vec[i]+((long long)curr*skill[i]));
                  else vec[i+1] = ((long long)curr * skill[i]) + vec[i];
            }
            for(int i=skill.size()-1;i>=0;i--){
                 vec[i] = vec[i+1] - ((long long)curr*skill[i]);
            }
        }
      return vec[vec.size()-1];
    }
};