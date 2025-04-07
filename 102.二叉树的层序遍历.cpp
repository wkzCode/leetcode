/*
 * @lc app=leetcode.cn id=102 lang=cpp
 *
 * [102] 二叉树的层序遍历
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
private:
    vector<vector<int>> res;
public:
    void func(TreeNode* root, int d = 1) {
        if (!root) return;
        if (res.size() <= d) {
            res.emplace_back(vector<int>());
        }
        res[d].emplace_back(root->val);
        func(root->left, d + 1);
        func(root->right, d + 1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        if (!root) return res;
        res.resize(1);
        res[0].emplace_back(root->val);
        func(root->left, 1);
        func(root->right, 1);
        return res;
    }
};
// @lc code=end

