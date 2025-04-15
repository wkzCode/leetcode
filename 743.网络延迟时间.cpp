/*
 * @lc app=leetcode.cn id=743 lang=cpp
 *
 * [743] 网络延迟时间
 */

// @lc code=start
class Solution {
public:
    int networkDelayTime(vector<vector<int>>& times, int n, int k) {
        vector<int> cost(n + 1, INT_MAX);
        vector<bool> visited(n + 1, 0);
        cost[k] = 0;
        visited[k] = 1;
        int visiting = k;
        int len = times.size();
        int cnt = 1;
        while (cnt++ < n) {
            for (int j = 0; j < len; ++j) {
                if (times[j][0] == visiting && !visited[times[j][1]]) {
                    if (cost[times[j][1]] == INT_MAX) {
                        cost[times[j][1]] = times[j][2] + cost[visiting];
                    } else {
                        cost[times[j][1]] = min(cost[times[j][1]],
                            cost[visiting] + times[j][2]);
                    }
                }
            }
            int m = INT_MAX, pos = 0;
            for (int j = 1; j <= n; ++j) {
                if (!visited[j] && cost[j] < m) {
                    m = cost[j];
                    pos = j;
                }
            }
            visited[pos] = true;
            visiting = pos;
        }
        return cost[visiting] == INT_MAX ? -1 : cost[visiting];
    }
};
// @lc code=end

