/*
 * @lc app=leetcode.cn id=112 lang=cpp
 *
 * [112] 路径总和
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
    void func(TreeNode* root, bool &b, int targetSum, int sum) {
        if (!root)return;
        sum += root->val;
        if (root->left == nullptr && root->right == nullptr) {
            if (sum == targetSum) {
                b = 1;
            }
            return;
        }
        func(root->left, b, targetSum, sum);    
        func(root->right, b, targetSum, sum);
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        if (!root)return 0;
        bool b = 0;
        func(root, b, targetSum, 0);
        return b;
    }
};
// @lc code=end

