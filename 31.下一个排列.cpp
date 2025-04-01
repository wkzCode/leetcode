/*
 * @lc app=leetcode.cn id=31 lang=cpp
 *
 * [31] 下一个排列
 */

 // @lc code=start
class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(), i = n - 1;
        for (; i > 0; --i) {
            if (nums[i] > nums[i - 1]) {
                int j = i, m = INT_MAX, p = j;
                while (j < n) {
                    if (nums[j] > nums[i - 1] && nums[j] < m) {
                        m = nums[j];
                        p = j;
                    }
                    ++j;
                }
                swap(nums[i - 1], nums[p]);
                break;
            }
        }
        sort(nums.begin() + i, nums.end());
    }
};
// @lc code=end

