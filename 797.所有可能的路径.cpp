/*
 * @lc app=leetcode.cn id=797 lang=cpp
 *
 * [797] 所有可能的路径
 */

// @lc code=start
class Solution {
private:
    vector<vector<int>>res;
    vector<int> path;
public:
    void dfs(int p, vector<vector<int>> graph, int n) {
        if (p == n) {
            res.emplace_back(path);
            return;
        }
        for (int v : graph[p]) {
            path.emplace_back(v);
            dfs(v, graph, n);
            path.pop_back();
        }
    }
    vector<vector<int>> allPathsSourceTarget(vector<vector<int>>& graph) {
        path.emplace_back(0);
        dfs(0, graph, graph.size() - 1);
        return res;
    }
};
// @lc code=end

