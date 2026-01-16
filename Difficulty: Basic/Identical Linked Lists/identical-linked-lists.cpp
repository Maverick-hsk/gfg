/*

class Node {
public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = NULL;
    }
};
*/
class Solution {
  public:
    bool areIdentical(Node *head1, Node *head2) {
      
           while(head1!= NULL && head2!= NULL){
               if((head1->data) !=(head2->data)){
                   return false;
               }
               
               else{
                   head1= head1->next;
                   head2= head2->next;
               }
           }
           
     //      return (h1!=NULL || h2!=NULL)? false:true;
     if(head1!= NULL || head2 != NULL) return false;
     else return true;
    }
};