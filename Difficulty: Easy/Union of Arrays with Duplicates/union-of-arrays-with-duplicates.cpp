class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        // code here
        set<int>st;
        for(int i=0;i<a.size();i++) st.insert(a[i]);
        for(auto i:b) st.insert(i);
        vector<int>res;
        for(auto i:st) res.push_back(i);
        return res;
    }
};