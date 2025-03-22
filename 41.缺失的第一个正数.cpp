/*
 * @lc app=leetcode.cn id=41 lang=cpp
 *
 * [41] 缺失的第一个正数
 */

 // @lc code=start
class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        unordered_set<int> us(nums.begin(), nums.end());
        int i = 1;
        while (1) {
            if (!us.count(i)) return i;
            ++i;
        }
    }
};
// @lc code=end

