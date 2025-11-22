class Solution {
  public:
    int countFreq(vector<int>& arr, int target) {
        // code here
        int s = 0;
        int e = arr.size();
        int first = -1;
        int last = -1;
        while(s<=e)
        {
            int mid = s + (e-s)/2;
            if(arr[mid]==target)
            {
                first = mid;
                e = mid -1;
            }
            else if (arr[mid]> target)
            {
                e = mid -1;
            }
            else
            {
                s = mid +1;
            }
        }
        
        s =0;
        e= arr.size();
        while(s<=e)
        {
        int mid = s + (e-s)/2;
        if(arr[mid]== target)
        {
            last = mid;
            s = mid+1;
        }
        else if (arr[mid]> target)
            {
                e = mid -1;
            }
            else
            {
                s = mid +1;
            }
        }
        int result = last - first +1;
        if(first ==-1 && last == -1)
        {
            result =  0;
        }
        return result;
    }
};
