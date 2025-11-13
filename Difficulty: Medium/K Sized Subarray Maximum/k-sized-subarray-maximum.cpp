class Solution {
  public:
    vector<int> maxOfSubarrays(vector<int>& arr, int k) {
        int i=0;
        int j=0;
        int n = arr.size();
        list<int> l;
        vector<int>ans;
        while(j<n){
            while( l.size()>0 && arr[j]>l.back()){ 
                l.pop_back();
            }
            l.push_back(arr[j]);
            
            if(j-i+1 <k){
                j++;
            }
            
            else if(j-i+1 ==k){
                ans.push_back(l.front());
               if(arr[i]==l.front()){
                   l.pop_front();
               }
               i++;
               j++;
            }
            
            
        }
        return ans;
    }
};
