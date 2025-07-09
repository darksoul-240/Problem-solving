#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
    struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  };
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>p;
        postorder(root,p);
        return p;
    }
    void postorder(TreeNode* root, vector<int>&p){
        if(root){
            postorder(root->left,p);
            postorder(root->right,p);
            p.push_back(root->val);
        }
    }
};