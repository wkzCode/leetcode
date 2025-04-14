/*
 * @lc app=leetcode.cn id=684 lang=cpp
 *
 * [684] 冗余连接
 */

// @lc code=start
class Solution {
private:
    vector<int>parent;
public:
    int find(int i) {
        if (parent[i] != i) {
            parent[i] = find(parent[i]);
        }
        return parent[i];
    }
    bool Union(int i, int j) {
        if (find(i) == find(j)) {
            return 1;
        }
        parent[find(i)] = find(j);
        return 0;
    }
    vector<int> findRedundantConnection(vector<vector<int>>& edges) {
        int n = edges.size();
        parent.resize(n + 1);
        for (int i = 0; i <= n; ++i) {
            parent[i] = i;
        }
        for (int i = 0; i < n; ++i) {
            if (Union(edges[i][0], edges[i][1])) {
                return edges[i];
            }
        }
        return {};
    }
};
// @lc code=end

