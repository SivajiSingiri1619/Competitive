class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        string temp = "";
        for(int i=0;i<digits.size();i++) temp += to_string(digits[i]);

        int rem = 1;
        string res = "";
        for(int i=temp.size()-1;i>=0;i--){
             
             if(rem != 0){
                 rem = rem + (temp[i] - '0');
                 res += to_string(rem%10);
                 rem /= 10;
             }
             else res += temp[i];
        }
        if(rem != 0 ) res += to_string(rem);
        vector<int>vec;
        for(int i=res.size()-1;i>=0;i--) vec.push_back((res[i] - '0'));
        return vec;
    }
};