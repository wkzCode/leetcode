/*
 * @lc app=leetcode.cn id=128 lang=cpp
 *
 * [128] 最长连续序列
 */

 // @lc code=start
class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size(), m = 0;
        unordered_set<int> us(nums.begin(), nums.end());
        for (int num : us) {
            if (!us.count(num - 1)) {
                int cnt = 1, a = num;
                while (us.count(++a)) {
                    ++cnt;
                }
                m = max(m, cnt);
            }
        }
        return m;
    }
};
// @lc code=end

