// User function template for C++
class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
       
        int rows = mat.size();
         int cols = mat[0].size();
          int i =0;
        int j = cols-1;
        while(i>=0 && i<rows && j>=0 && j<cols)
        {
            if(mat[i][j]==x) return true;
            else if(mat[i][j]<x){
                i++;
            }
            else if(mat[i][j]>x){
                j--;
            }
        }
        return false;
    }
};