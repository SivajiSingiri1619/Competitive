/*
class Node {
 public:
    int data;
    Node *next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/

class Solution {
  public:
    int lengthOfLoop(Node *head) {
        // code here
        
       if(!head) return 0;
       
       Node* slow = head;
       Node* fast = head;
       while(fast && fast->next){
             
             slow = slow->next;
             fast = fast->next->next;
             
             if(slow == fast){
                 Node* temp = slow->next;
                 int cnt = 1;
                 while(temp != slow){
                     cnt++;
                     temp = temp->next;
                 }
                 return cnt;
             }
       }
       return 0;
    }
};