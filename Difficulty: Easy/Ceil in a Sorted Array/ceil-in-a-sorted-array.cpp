// User function Template for C++
class Solution {
  public:
    int findCeil(vector<int>& arr, int x) {
        int s = 0;
        int e = arr.size()-1;
        int result = -1;
        while(s<=e)
        {
            int mid = s +(e-s)/2;
            if(arr[mid]>=x)
            {
                  result = mid;
                e = mid-1;
            }
            else {
              s = mid+1;
            }
        }
        return result;
    }
};