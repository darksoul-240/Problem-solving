#include <bits/stdc++.h>
using namespace std;

class Solution{
public:    
    struct TreeNode {
      int val;
      TreeNode *left;
      TreeNode *right;
      TreeNode() : val(0), left(nullptr), right(nullptr) {}
      TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
      TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
    };
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int> pro;
       inorder(root,pro);
        return pro;
    };
    void inorder(TreeNode* root1, vector<int>&proof){
        if(root1!=nullptr){
            inorder(root1->left,proof);
            proof.push_back(root1->val);
            inorder(root1->right,proof);
        }
    };
   
   
};