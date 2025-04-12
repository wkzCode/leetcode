/*
 * @lc app=leetcode.cn id=210 lang=cpp
 *
 * [210] 课程表 II
 */

// @lc code=start
class Solution {
private:
    vector<int>visited;
    bool b=1;
    vector<vector<int>> edge;
    vector<int>seq;
public:
    void dfs(int p) {
        visited[p] = 1;
        for (int v: edge[p]) {
            if (!visited[v]) {
                dfs(v);
                if (!b)return;
            } else if (visited[v] == 1) {
                b = 0;
                return;
            }
        }
        visited[p] = 2;
        seq.emplace_back(p);
    }
    vector<int> findOrder(int numCourses, vector<vector<int>>& prerequisites) {
        visited.resize(numCourses);
        edge.resize(numCourses);
        for (int i = 0; i < prerequisites.size(); ++i) {
            edge[prerequisites[i][1]].emplace_back(prerequisites[i][0]);
        }
        for (int i = 0; i < numCourses && b; ++i) {
            if (!visited[i]) {
                dfs(i);
            }
        }
        if(b) {
            reverse(seq.begin(), seq.end());
            return seq;
        }
        return {};
    }
};
// @lc code=end

