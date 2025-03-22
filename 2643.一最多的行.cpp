/*
 * @lc app=leetcode.cn id=2643 lang=cpp
 *
 * [2643] 一最多的行
 */

 // @lc code=start
class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n = mat.size(), m = 0, p = 0;
        for (int i = 0; i < n; ++i) {
            int sum = accumulate(mat[i].begin(), mat[i].end(), 0);
            if (m < sum) {
                m = sum;
                p = i;
            }
        }
        return {p,m};
    }
};
// @lc code=end

