/*
 * @lc app=leetcode.cn id=3 lang=cpp
 *
 * [3] 无重复字符的最长子串
 */

 // @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> us;
        int n = s.length(), i = 0, m = 0, j = 0;
        while (i < n) {
            auto it = us.insert(s[i]);
            if (it.second) {
                ++i;
            } else {
                m = max(m, i - j);
                while (us.count(s[i])) {
                    us.erase(s[j++]);
                }
            }
        }
        return max(m, i - j);
    }
};
// @lc code=end

