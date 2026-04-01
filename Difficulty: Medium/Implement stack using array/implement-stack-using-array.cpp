class myStack {
public:
    vector<int> st;
    int siz;

    myStack(int n) {
        siz = n;
    }

    bool isEmpty() {
        return st.size() == 0;
    }

    bool isFull() {
        return st.size() == siz;
    }

    void push(int x) {
        if (!isFull()) {
            st.push_back(x);
        }
    }

    void pop() {
        if (!isEmpty()) {
            st.pop_back();
        }
    }

    int peek() {
        if (!isEmpty()) {
            return st.back();
        }
        return -1;
    }
};