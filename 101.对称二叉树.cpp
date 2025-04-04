/*
 * @lc app=leetcode.cn id=101 lang=cpp
 *
 * [101] 对称二叉树
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
    void func(TreeNode*& root1, TreeNode*& root2, bool& b) {
        if (root1 == nullptr && root2 == nullptr)return;
        else if (root1 == nullptr || root2 == nullptr) {
            b = 0;
            return;
        }
        if (root1->val == root2->val) {
            func(root1->left, root2->right, b);
            func(root1->right, root2->left, b);
        } else {
            b = false;
            return;
        }
    }
    bool isSymmetric(TreeNode* root) {
        bool b = 1;
        func(root->left, root->right, b);
        return b;
    }
};
// @lc code=end

