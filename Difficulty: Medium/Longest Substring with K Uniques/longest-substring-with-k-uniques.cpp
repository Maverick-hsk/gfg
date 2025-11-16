class Solution {
  public:
    int longestKSubstr(string &s, int k) {
    int i=0;
    int j=0;
    int n = s.size();
    int maxi = 0;
    unordered_map<char,int> umap;
    while(j<n)
    {
      
         umap[s[j]]++;
         
     if(umap.size()<k)
        {
         j++;
        }
     
     else if(umap.size()==k)
        {
         maxi = max(maxi, j-i+1);
         j++;
         }
     
     else if(umap.size()>k)
        {
        while(umap.size()>k)
            {
         umap[s[i]]--;
         if(umap[s[i]]==0)
         {
             umap.erase(s[i]);
         }
         i++;
            }
            j++;
        }
      
    }
    if(umap.size()<k) maxi =-1;
        return maxi;
    }
};