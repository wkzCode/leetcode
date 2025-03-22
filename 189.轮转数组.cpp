/*
 * @lc app=leetcode.cn id=189 lang=cpp
 *
 * [189] 轮转数组
 */

 // @lc code=start
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int n = nums.size();
        k %= n;
        vector<int> t(nums.begin() + n - k, nums.end());
        for (int i = nums.size() - k - 1; i >= 0; i--) {
            nums[i + k] = nums[i];
        }
        for (int i = 0; i < k; ++i) {
            nums[i] = t[i];
        }
    }
};
// @lc code=end

