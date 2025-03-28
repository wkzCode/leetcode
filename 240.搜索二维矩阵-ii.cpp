/*
 * @lc app=leetcode.cn id=240 lang=cpp
 *
 * [240] 搜索二维矩阵 II
 */

 // @lc code=start
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size(), n = matrix[0].size();
        if (target > matrix[m - 1][n - 1] || target < matrix[0][0])return 0;
        for (int i = 0; i < m; ++i) {
            if (target <= matrix[i][n - 1]) {
                int p = n - 1;
                while (p >= 0) {
                    if (target == matrix[i][p])return 1;
                    else if (target > matrix[i][p])break;
                    --p;
                }
            }
        }
        return 0;
    }
};
// @lc code=end

