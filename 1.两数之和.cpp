/*
 * @lc app=leetcode.cn id=1 lang=cpp
 *
 * [1] 两数之和
 */

 // @lc code=start
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        if (n == 2) {
            return {0, 1};
        }
        // for (int i = 0; i < n; ++i) {
        //     for (int j = i + 1; j < n; ++j) {
        //         if (nums [i] + nums [j] == target) {
        //             return {i, j};
        //         }
        //     }
        // }
        unordered_map<int, int> us;
        for (int i = 0; i < n; ++i) {
            auto it = us.find(target - nums[i]);
            if (it != us.end()) {
                return {it->second, i};
            }
            us[nums[i]] = i;
        }
        return {};
    }
};
// @lc code=end

