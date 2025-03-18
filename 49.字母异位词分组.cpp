/*
 * @lc app=leetcode.cn id=49 lang=cpp
 *
 * [49] 字母异位词分组
 */

 // @lc code=start
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        int len = strs.size();
        if (len < 2)return {strs};
        unordered_map<string, vector<string>> um;
        for (int i = 0; i < len; ++i) {
            string t = strs[i];
            sort(t.begin(), t.end());
            um[t].push_back(strs[i]);
        }
        vector<vector<string>> res;
        for (auto it : um) {
            res.push_back(it.second);
        }
        return res;
    }
};
// @lc code=end

