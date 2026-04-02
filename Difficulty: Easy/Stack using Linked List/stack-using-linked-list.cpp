/* class Node {
  public:
    int data;
    Node* next;

    Node(int x) {
        data = x;
        next = nullptr;
    }
}; */

class myStack {

  public:
  Node* top = NULL;
  int count= 0;
    myStack() {
        
    }

    bool isEmpty() {
        return top==NULL;
    }

    void push(int x) {
        Node* temp = new Node(x);
        temp->data = x;
        temp->next = top;
        top = temp;
        count++;
        
    }

    void pop() {
        Node* temp = top;
        
        top = top->next;
        delete(temp);
        count--;
    }

    int peek() {
        // Returns the top element of the stack
        // If stack is empty, return -1
        if(top!= NULL) return top->data;
        else return -1;
    }

    int size() {
        // Returns the current size of the stack.
        return count;
    }
};