class Solution {
  public:
    queue<int> reverseFirstK(queue<int> q, int k) {
        stack<int> st;
        queue<int> ans;
        if (k > q.size()) return q;
        
        while(k--&& !q.empty() ){
            st.push(q.front());
            q.pop();
        }
        while(!st.empty()){
            ans.push(st.top());
            st.pop();
        }
        
        while(!q.empty()){
            ans.push(q.front());
            q.pop();
        }
        return ans;
    }
};