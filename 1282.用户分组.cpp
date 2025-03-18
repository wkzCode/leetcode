/*
 * @lc app=leetcode.cn id=1282 lang=cpp
 *
 * [1282] 用户分组
 */

 // @lc code=start
class Solution {
public:
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        unordered_map<int, vector<int>> um;
        int n = groupSizes.size();
        for (int i = 0; i < n; i++) {
            um[groupSizes[i]].emplace_back(i);
        }
        vector<vector<int>> res;
        for (auto i : um) {
            if (i.first == i.second.size()) {
                res.emplace_back(i.second);
            } else {
                int len = i.second.size();
                for (int j = 0; j < len; j += i.first) {
                    vector<int> vt(i.second.begin() + j, i.second.begin() + j + i.first);
                    res.emplace_back(vt);
                }
            }

        }
        return res;
    }
};
// @lc code=end

