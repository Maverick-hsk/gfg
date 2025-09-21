class Solution {
  public:
    bool twoSum(vector<int>& arr, int target) {
        int n = arr.size();
        int e =0;
        int r=0;
        
        sort(arr.begin(), arr.end());
        for(int i=0;i<n;i++){
            e = target - arr[i];
            r=i;
            int low = 0;
            int high = n-1;
            while(low<=high){
            int mid = low + (high-low)/2;
            if(e == arr[mid] && r!=mid ){
                return true;
            }
            else if(e<arr[mid]){
                high = mid-1;
            }
            else{
                low = mid+1;
            }
        }
        }
        
        return false;
    }
};