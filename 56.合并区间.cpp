/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

 // @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> res;
        int n = intervals.size();
        sort(intervals.begin(), intervals.end(), [](vector<int>a, vector<int>b) {return a[0] < b[0]; });
        for (int i = 0; i < n - 1; ++i) {
            if (intervals[i][1] >= intervals[i + 1][0]) {
                intervals[i + 1][0] = intervals[i][0];
                intervals[i + 1][1] = max(intervals[i][1], intervals[i + 1][1]);
            } else {
                res.push_back(intervals[i]);
            }
        }
        res.push_back(intervals[n - 1]);
        return res;
    }
};
// @lc code=end

