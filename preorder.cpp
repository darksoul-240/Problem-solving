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
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>pro;
        preorder(root,pro);
        return pro;
    }
    void preorder(TreeNode* root, vector<int>&proof){
        if(root){
            proof.push_back(root->val);
            preorder(root->left,proof);
            preorder(root->right,proof);
        }
    }
};