
class Solution {
  public:
    vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        int ele1 = INT_MIN;
        int ele2 = INT_MIN;
        int count1 = 0;
        int count2= 0;
        vector<int> ans;
        for(int i=0;i<n;i++){
            if(count1==0 & ele2 != arr[i]){
                count1 =1;
                ele1 =arr[i];
            }
            
            else if(count2==0 &&  ele1 != arr[i]){
                count2 =1;
                ele2 = arr[i];
            }
            
            else if(ele1 == arr[i]) count1++;
            else if(ele2 == arr[i]) count2++;
            else{
                count1--;
                count2--;
            }
            }
            
            count1 = 0;
            count2= 0;
            for(int i=0;i<n;i++){
                if(ele1 == arr[i]) count1++;
                if(ele2 == arr[i]) count2++;
            }
            
            if(count1>=(n/3 +1)) ans.push_back(ele1);
            if(count2>= (n/3 +1)) ans.push_back(ele2);
        sort(ans.begin(), ans.end());
        return ans;
    //     vector<int> v;
    //     sort(arr.begin(), arr.end());
        
    //   for(int i=0;i<n;i++){
           
    //           if(i > 0 && arr[i] == arr[i-1]) continue;
    //           int count=0;
      
    //       for(int j = 0;j<n;j++){
    //           if(arr[i]==arr[j]){
    //               count++;
    //           }
    //       }
           
    //       if(count> n/3) v.push_back(arr[i]);
    //       if(v.size()==2) break;
    //   }
    //     sort(v.begin(), v.end());
    //     return v;
    }
};