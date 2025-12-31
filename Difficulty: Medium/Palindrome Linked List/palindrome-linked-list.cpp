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
    bool isPalindrome(Node *head) {
        //  code here
        string str = "";
        while(head != NULL){
             str += head->data;
             head = head->next;
        }
        
        int i=0,j=str.size()-1;
        while(i < j){
             if(str[i] != str[j]) return false;
             i++;
             j--;
        }
        return true;
        
    }
};