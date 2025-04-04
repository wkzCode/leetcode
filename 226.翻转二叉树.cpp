/*
 * @lc app=leetcode.cn id=226 lang=cpp
 *
 * [226] 翻转二叉树
 */

 // @lc code=start
 /**
  * Definition for a binary tree node.
  * struct TreeNode {
  *     int val;
  *     TreeNode *left;
  *     TreeNode *right;
  *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
  *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
  * };
  */
class Solution {
public:
    void func(TreeNode*& root) {
        if (!root) return;
        TreeNode* t = root->left;
        root->left = root->right;
        root->right = t;
        func(root->left);
        func(root->right);
    }
    TreeNode* invertTree(TreeNode* root) {
        func(root);
        return root;
    }
};
// @lc code=end

