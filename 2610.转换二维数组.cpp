/*
 * @lc app=leetcode.cn id=2610 lang=cpp
 *
 * [2610] 转换二维数组
 */

 // @lc code=start
class Solution {
public:
    vector<vector<int>> findMatrix(vector<int>& nums) {
        vector<vector<int>> res;
        unordered_set<int> s;
        int len = nums.size(), i = 0;
        while (len > 0) {
            while (i < len) {
                auto it = s.insert(nums[i]);
                if (it.second) {
                    nums.erase(nums.begin() + i);
                    --len;
                } else {
                    ++i;
                }
            }
            vector<int> t(s.begin(), s.end());
            res.emplace_back(t);
            s.clear();
            i = 0;
        }
        return res;
    }
};
// @lc code=end

