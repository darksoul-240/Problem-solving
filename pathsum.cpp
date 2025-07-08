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
    bool hasPathSum(TreeNode* root, int targetSum) {
        if(!root) return false;
        if(!root->right and !root->left) return targetSum==root->val;
        return hasPathSum(root->right,targetSum-root->val) or hasPathSum(root->left,targetSum-root->val); 
    };
   
   
};