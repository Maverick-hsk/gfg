
class Solution {
  public:
    int firstNonRepeating(vector<int>& arr) {
       unordered_map<int,int> umap;
       int n = arr.size();
       
       for(int i=0;i<n;i++){
           umap[arr[i]]++;
       }
       
       for(int i =0; i<n;i++){
           if(umap[arr[i]]==1){
               return arr[i];
           }
       }
       return 0;
    }
};
