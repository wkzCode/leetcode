/*
 * @lc app=leetcode.cn id=110 lang=cpp
 *
 * [110] 平衡二叉树
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
    // int depth(TreeNode* root) {
    //     if (!root)return 0;
    //     else return max(depth(root->left), depth(root->right)) + 1;
    // }
    // void func(TreeNode* root, bool& b) {
    //     if (!root) {
    //         return;
    //     } else if (abs(depth(root->left) - depth(root->right)) > 1) {
    //         b = 0;
    //         return;
    //     } else {
    //         func(root->left, b);
    //         func(root->right, b);
    //     }
    // }
    int func(TreeNode* root) {
        if (!root)return 0;
        int left = func(root->left);
        if (left == -1)return -1;
        int right = func(root->right);
        if (right == -1)return -1;
        if (abs(left - right) > 1)return -1;
        return max(left, right) + 1;
    }
    bool isBalanced(TreeNode* root) {
        return func(root) != -1;
    }
};
// @lc code=end

