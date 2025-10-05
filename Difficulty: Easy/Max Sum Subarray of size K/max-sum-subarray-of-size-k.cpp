class Solution {
  public:
    int maxSubarraySum(vector<int>& arr, int k) {
        int n = arr.size();
        int i =0;
        int j =0;
        int mx = INT_MIN;
        int sum =0;
        while(j<n){
               sum = sum + arr[j];
            if(j-i+1<k){
                j++;
               
            }
            else if(j-i+1 == k){
                mx = max(mx, sum);
                sum = sum - arr[i];
                i++;
                j++;
            }
        }
        return mx;
    }
};