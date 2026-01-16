/*
class Node {
  public:
    int data;
    Node* next;

    // Default constructor
    Node() {
        data = 0;
        next = NULL;
    }

    // Parameterised Constructor
    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};
*/
class Solution {
  public:
    Node *insertAtEnd(Node *head, int x) {
        Node *new_node = new Node();
        new_node->data = x;
        new_node->next= NULL;
        
        Node *last = head;
        if(head == NULL){
            head = new_node;
            return head;
        }
        
        else {
            while(last->next != NULL){
            last= last->next;
        }
        last->next = new_node;
        }
     return head;   
    }
};