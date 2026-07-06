/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> topView(Node *root) {
        vector<int> ans;
        if (root==NULL) return ans;
        queue<pair<Node* ,int>> qt;
        map<int,int> mp;
        qt.push({root,0});
        
        while(!qt.empty()){
            auto it = qt.front();
            qt.pop();
            Node* node = it.first;
            int line= it.second;
            if(mp.find(line)==mp.end()) mp[line] = node->data;
            
            if(node->left!= NULL) qt.push({node->left, line-1});
            if(node->right!= NULL) qt.push({node->right, line+1});
        }       
        
       for(auto it: mp){
           ans.push_back(it.second);
       }
       return ans;
    }
};