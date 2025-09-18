class Solution {
  public:
    vector<int> findUnion(vector<int>& a, vector<int>& b) {
        unordered_set<int> s;
          vector<int> ans;
        for(auto x: a){
            s.insert(x);
        }

       for(auto y : b){
           s.insert(y);
       }
        
        
     for(auto it= s.begin(); it!=s.end();it++){
         ans.push_back(*it);
     }
        
    return ans;    
    }
};