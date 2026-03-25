stack<int> min_st;

stack<int> _push(int arr[], int n) {
stack<int> st;
int i =0;
while(i<n){
    st.push(arr[i]);
    if(min_st.empty() || arr[i]<= min_st.top()){
        min_st.push(arr[i]);
    }
    i++;
}
 return st;   
}

// Function to print minimum value in stack each time while popping.
void _getMinAtPop(stack<int> s) {
    while(!s.empty()){
cout<<min_st.top()<<" ";

if(min_st.top()== s.top()){
    min_st.pop();
}
    s.pop();
    }
}