class Solution {
  public:
    int intersectSize(vector<int> &a, vector<int> &b) {
      unordered_map<int,int> umap;
      int n = a.size();
      int m = b.size();
      int count=0;
      for(int i=0;i<n;i++){
          umap[a[i]]++;
      }
      
      for(int j=0;j<m;j++){
          umap[b[j]]++;
      }
      
      for(auto it= umap.begin(); it!= umap.end();it++){
          if(it->second >1){
              count++;
          }
      }
      
      return count;
    }
};