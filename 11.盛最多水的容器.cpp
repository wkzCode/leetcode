/*
 * @lc app=leetcode.cn id=11 lang=cpp
 *
 * [11] 盛最多水的容器
 */

 // @lc code=start
class Solution {
public:
    int maxArea(vector<int>& height) {
        int m = 0, l = 0, r = height.size() - 1;
        while (l < r) {
            m = max(m, min(height[l], height[r]) * (r - l));
            height[l] < height[r] ? l++ : r--;
        }
        return m;
    }
};
// @lc code=end

