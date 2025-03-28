/*
 * @lc app=leetcode.cn id=2716 lang=cpp
 *
 * [2716] 最小化字符串长度
 */

 // @lc code=start
class Solution {
public:
    int minimizedStringLength(string s) {
        unordered_set<char> us(s.begin(), s.end());
        return us.size();
    }
};
// @lc code=end

