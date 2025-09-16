class Solution {
  public:
    // Function to count the frequency of all elements from 1 to N in the array.
    vector<int> frequencyCount(vector<int>& arr) {
        int n= arr.size();
        unordered_map<int,int> umap;
        
        for(int i=0;i<n;i++){
            int key=arr[i];
            umap[key]++;
        }
        
        vector<int> result(n,0);
        for(int i=0;i<=n;i++){
            if(umap.find(i) != umap.end()){
                result[i-1] = umap[i];
            }
        }
        
        return result;
    }
};
