/*
 * @lc app=leetcode.cn id=802 lang=cpp
 *
 * [802] 找到最终的安全状态
 */

// @lc code=start
class Solution {
private:
    vector<int>visited;
public:
    bool dfs(int p,vector<vector<int>>& graph) {
        if (visited[p]) {
            return visited[p] == 2;
        }
        visited[p] = 1;
        for (int v : graph[p]) {
            if (!dfs(v, graph)) {
                return 0;
            }
        }
        visited[p] = 2;
        return 1;
    }
    vector<int> eventualSafeNodes(vector<vector<int>>& graph) {
        int n = graph.size();
        visited.resize(n);
        vector<int>res;
        for (int i = 0; i < n; ++i) {
            if (visited[i] == 2) {
                res.emplace_back(i);
            } else if (!visited[i]) {
                if (dfs(i, graph)) {
                    res.emplace_back(i);
                }
            }
        }
        return res;
    }
};
// @lc code=end

