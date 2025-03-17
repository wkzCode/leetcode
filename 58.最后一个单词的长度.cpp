/*
 * @lc app=leetcode.cn id=58 lang=cpp
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
class Solution {
public:
    int lengthOfLastWord(string s) {
        vector<string> result;
        istringstream iss(s);
        string token;

        while (iss >> token) {
            result.push_back(token);
        }
        return result[result.size()-1].length();
    }
};
// @lc code=end

