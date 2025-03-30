/*
 * @lc app=leetcode.cn id=2109 lang=cpp
 *
 * [2109] 向字符串添加空格
 */

 // @lc code=start
class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = s.length(), cnt = 0, len = spaces.size();
        string res;
        res += s.substr(0, spaces[0]);
        for (int i = 1; i < len; ++i) {
            res += " ";
            res += s.substr(spaces[i - 1], spaces[i] - spaces[i - 1]);
        }
        res += " ";
        res += s.substr(spaces[len - 1], n - spaces[len - 1]);
        return res;
    }
};
// @lc code=end

