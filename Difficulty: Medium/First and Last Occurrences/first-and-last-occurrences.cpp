class Solution {
  public:
    vector<int> find(vector<int>& arr, int x) {
        // code here
        int s = 0;
        int e = arr.size()-1;
        int first =-1;
        int last = -1;
        vector<int> ans;
        while(s <= e){
            int mid = s + (e-s)/2;
           if(arr[mid]==x){
               first = mid;
               e = mid-1;
           }
           else if(x< arr[mid]){
               e = mid-1;
           }
           else {
               s = mid+1;
           }
        }
        
        s = 0;
        e = arr.size()-1;
        while(s<=e){
            int mid = s + (e-s)/2;
            if (x == arr[mid]){
                last = mid;
                s = mid+1;
            }
             else if(x< arr[mid]){
               e = mid-1;
           }
           else {
               s = mid+1;
           }
        }
        ans.push_back(first);
        ans.push_back(last);
        return ans;
    }
};