/*
 * @lc app=leetcode.cn id=111 lang=cpp
 *
 * [111] 二叉树的最小深度
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
    int mdepth = INT_MAX;
    // 深度优先
    void func(TreeNode* root, int d) {
        if (!root) return;
        if (root->left == nullptr && root->right == nullptr) {
            mdepth = min(mdepth, d);
            return;
        }
        func(root->left, d + 1);
        func(root->right, d + 1);
    }
    int minDepth(TreeNode* root) {
        if (!root) return 0;
        func(root, 1);
        return mdepth;
    }

    // 广度优先
    // int minDepth(TreeNode* root) {
    //     if (!root) return 0;
    //     if (!root->left && !root->right) return 1;
    //     queue<pair<TreeNode*,int>> q;
    //     q.push(make_pair(root, 1));
    //     int mdepth = INT_MAX;
    //     while (!q.empty()) {
    //         TreeNode* node = q.front().first;
    //         int depth = q.front().second;
    //         q.pop();
    //         if (!node->left && !node->right) {
    //             mdepth = min(mdepth, depth);
    //         }
    //         if (node->left) {
    //             q.push(make_pair(node->left, depth + 1));
    //         }
    //         if (node->right) {
    //             q.push(make_pair(node->right, depth + 1));
    //         }
    //     }
    //     return mdepth;
    // }
};
// @lc code=end

