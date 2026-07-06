/*
Definition for Node
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = right = nullptr;
    }
};
*/

class Solution {
  public:
    vector<int> bottomView(Node *root) {
        queue<pair<Node*, int>> qt;
        map<int,int> mp;
        qt.push({root, 0});
        while(!qt.empty()){
            auto it = qt.front();
            qt.pop();
            int line = it.second;
            Node* node = it.first;
            
            mp[line] = node->data;
            
            if(node->left != NULL) qt.push({node->left, line-1});
            if(node->right != NULL ) qt.push({node->right, line+1});
            
        }
        vector<int> ans;
        for(auto x: mp){
            ans.push_back(x.second);
        }
        return ans;
    }
};