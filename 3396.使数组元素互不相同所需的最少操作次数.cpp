/*
 * @lc app=leetcode.cn id=3396 lang=cpp
 *
 * [3396] 使数组元素互不相同所需的最少操作次数
 */

 // @lc code=start
class Solution {
public:
    int minimumOperations(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        unordered_map<int, int> um;
        for (int i = 0; i < n; ++i) {
            ++um[nums[i]];
            if (um[nums[i]] == 2) {
                ++cnt;
            }
        }
        if (cnt == 0)return 0;
        for (int i = 0; i < n; ++i) {
            if (um[nums[i]] > 1) {
                --um[nums[i]];
            }
            if (um[nums[i]] == 1) {
                --cnt;
            }
            if (!cnt) {
                return i / 3 + 1;
            }
        }
        return 0;
    }
};
// @lc code=end

