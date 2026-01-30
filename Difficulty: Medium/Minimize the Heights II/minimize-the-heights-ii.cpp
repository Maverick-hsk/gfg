class Solution {
  public:
    int getMinDiff(vector<int> &arr, int k) {
       int n = arr.size();
       if(n==0 && n==1 ) return 0;
       
       sort(arr.begin(), arr.end());
       int diff = arr[n-1] - arr[0];
      // cout<<diff<<endl;
       for(int i =0;i<n;i++){
           if(arr[i+1]-k <0) continue;
             int maxi = max(arr[i]+k,arr[n-1]-k);
             int mini = min(arr[0]+k, arr[i+1]-k);
    //   cout<<"maxi is"<<maxi<<endl;
   //        cout<<"mini is"<<mini<<endl;

           diff = min(diff, maxi - mini); 
         //  cout<<diff;
       }
        
        return diff;
    }
};