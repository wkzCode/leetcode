/*
 * @lc app=leetcode.cn id=75 lang=cpp
 *
 * [75] 颜色分类
 */

 // @lc code=start
class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> v(3, 0);
        for (int num : nums) {
            v[num]++;
        }
        int p = 0, cnt = 0;
        while (cnt < 3) {
            while (v[cnt]--) {
                nums[p++] = cnt;
            }
            ++cnt;
        }
    }
};
// @lc code=end

