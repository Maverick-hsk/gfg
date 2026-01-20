/*
The structure of linked list is the following

struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/

class Solution {
  public:
    Node *removeDuplicates(Node *head) {
       unordered_set<int> seen;
       Node *curr = head;
      // if(curr== NULL) return head;
       while(curr != NULL && curr->next != NULL){
           
           seen.insert(curr->data);
           
           if(seen.find(curr->next->data) != seen.end()){
               Node* temp = curr->next;
               curr->next = temp->next;
               delete temp;
           }
           
           else{
               seen.insert(curr->next->data);
               curr= curr->next;
           }
       }
       return head;
    }
};