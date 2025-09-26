class Solution {
  public:
    void rotateDeque(deque<int>& dq, int type, int k) {
        // code here
        
        if(type == 1){
            while(k > 0){
                
                int val = dq.back();
                dq.pop_back();
                dq.push_front(val);
                k--;
            }
        }
        else{
            
            while(k > 0){
                int val = dq.front();
                dq.pop_front();
                dq.push_back(val);
                k--;
            }
        }
    }
};