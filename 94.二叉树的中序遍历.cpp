/*
 * @lc app=leetcode.cn id=94 lang=cpp
 *
 * [94] 二叉树的中序遍历
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
    void morder(TreeNode* root, vector<int>& res) {
        if (!root)return;
        morder(root->left, res);
        res.emplace_back(root->val);
        morder(root->right, res);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        vector<int>res;
        morder(root, res);
        return res;
    }
};
// @lc code=end

