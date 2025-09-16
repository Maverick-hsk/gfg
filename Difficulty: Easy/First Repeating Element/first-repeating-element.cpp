class Solution {
  public:
    int firstRepeated(vector<int> &arr) {
        unordered_map<int, int> umap;
        int n= arr.size();
        
        for(int i=0; i<n;i++){
            int key = arr[i];
            umap[key]++;
        }
        
        for(int i=0;i<n;i++){
            if(umap[arr[i]]>1){
                return i+1;
            }
        }
        return -1;
    }
};