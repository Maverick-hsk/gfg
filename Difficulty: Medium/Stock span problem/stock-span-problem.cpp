class Solution {
  public:
    vector<int> calculateSpan(vector<int>& arr) {
        stack<pair<int,int>> st;
        vector<int> result;
        for(int i=0;i<arr.size();i++){
            int span =1;
        while(!st.empty() && st.top().first <= arr[i]){
            span += st.top().second;
            st.pop();
        }
        
        st.push({arr[i],span});
        result.push_back(span);
        }
        
    return result;    
        
    }
};