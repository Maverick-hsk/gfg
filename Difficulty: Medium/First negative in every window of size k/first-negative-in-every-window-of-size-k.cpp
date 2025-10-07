class Solution {
  public:
    vector<int> firstNegInt(vector<int>& arr, int k) {
        int i =0;
        int j = 0;
        int n = arr.size();
        vector<int> ans;
        deque<int> dq;
        while(j<n){
                if(arr[j]<0){
                    dq.push_back(arr[j]);
                }
            if(j-i+1 <k) { 
                j++;
            }
                
                
            else if(j-i+1 == k){
            
            if(dq.empty()){
                ans.push_back(0);
            }
            
            else ans.push_back(dq.front());
          
          if(!dq.empty() && arr[i]==dq.front())
          {
              dq.pop_front();
          }
          
          i++;
          j++;
            } 
        }
        return ans;
    }
};