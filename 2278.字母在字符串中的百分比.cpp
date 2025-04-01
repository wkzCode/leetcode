/*
 * @lc app=leetcode.cn id=2278 lang=cpp
 *
 * [2278] 字母在字符串中的百分比
 */

 // @lc code=start
class Solution {
public:
    int percentageLetter(string s, char letter) {
        int n = s.length(), cnt = 0;
        for (int i = 0; i < n; ++i) {
            if (s[i] == letter) ++cnt;
        }
        return cnt * 100 / n;
    }
};
// @lc code=end

