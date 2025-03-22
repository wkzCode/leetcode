/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子数组和
 */

 // @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size(), m = nums[0], sum = nums[0];
        for (int i = 1; i < n; ++i) {
            sum = max(sum + nums[i], nums[i]);
            m = max(m, sum);
        }
        return m;
    }
};
// @lc code=end

