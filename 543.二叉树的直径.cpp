/*
 * @lc app=leetcode.cn id=543 lang=cpp
 *
 * [543] 二叉树的直径
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
    int cnt;
public:
    int maxdepth(TreeNode* root) {
        if (!root) return 0;
        int l = maxdepth(root->left);
        int r = maxdepth(root->right);
        cnt = max(cnt, l + r + 1);
        return max(l, r) + 1;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        cnt = 1;
        maxdepth(root);
        return cnt - 1;
    }
};
// @lc code=end

