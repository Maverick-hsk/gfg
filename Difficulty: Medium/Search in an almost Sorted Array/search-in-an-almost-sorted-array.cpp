// User function Template for C++
class Solution {
  public:
    int findTarget(vector<int>& arr, int target) {
        int s =0;
        int n = arr.size();
        int e = n-1;
        int index = -1;
        while(s<=e)
        {
            
            int mid = s + (e-s)/2;
            if(arr[mid]==target)
            {
                return mid;
            }
            
            if(mid+1 <= e && arr[mid+1]== target)
            {
                return mid+1;
            }
            
            if(mid-1>= s && arr[mid -1] == target)
            {
                return mid -1;
            }
            
            else if( target< arr[mid] )
            {
            e = mid-2;
            }
            
            else if( target> arr[mid])
            {
            s = mid +2;
            }
        }
        return -1;
    }
};