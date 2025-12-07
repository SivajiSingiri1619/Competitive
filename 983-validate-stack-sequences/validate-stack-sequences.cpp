class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int j=0;
        stack<int>st;
        for(int i=0;i<pushed.size();i++){
            st.push(pushed[i]);
            if(st.top() == popped[j]){
                while(j < popped.size() && !st.empty()){
                    if(st.top() == popped[j]) st.pop();
                    else break;
                    j++;
                }
            }
        }
        bool res = true;
        while(!st.empty() && j < popped.size()){
             if(st.top() != popped[j]){
                 res = false;
                 break;
             }
             st.pop();
             j++;
        }
        return res;
    }
};