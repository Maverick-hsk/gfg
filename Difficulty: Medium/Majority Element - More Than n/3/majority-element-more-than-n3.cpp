
class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        vector<int> v;
        sort(arr.begin(), arr.end());
        
       for(int i=0;i<n;i++){
           
              if(i > 0 && arr[i] == arr[i-1]) continue;
              int count=0;
      
           for(int j = 0;j<n;j++){
               if(arr[i]==arr[j]){
                   count++;
               }
           }
           
           if(count> n/3) v.push_back(arr[i]);
           if(v.size()==2) break;
       }
        sort(v.begin(), v.end());
        return v;
    }
};