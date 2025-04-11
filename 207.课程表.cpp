/*
 * @lc app=leetcode.cn id=207 lang=cpp
 *
 * [207] 课程表
 */

 // @lc code=start
class Solution {
private:
    bool b = 1;
    vector<int> visited;
    vector<vector<int>> edge;
public:
    void dfs(int p) {
        visited[p] = 1;
        for (int v : edge[p]) {
            if (!visited[v]) {
                dfs(v);
                if (!b) {
                    return;
                }
            } else if (visited[v] == 1) {
                b = 0;
                return;
            }
        }
        visited[p] = 2;
    }
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        visited.resize(numCourses);
        edge.resize(numCourses);
        int n = prerequisites.size();
        for (int i = 0; i < n; ++i) {
            edge[prerequisites[i][1]].emplace_back(prerequisites[i][0]);
        }
        for (int i = 0; i < numCourses && b; ++i) {
            if (!visited[i]) {
                dfs(i);
            }
        }
        return b;
    }
};
// @lc code=end

