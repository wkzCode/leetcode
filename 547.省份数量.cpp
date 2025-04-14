/*
 * @lc app=leetcode.cn id=547 lang=cpp
 *
 * [547] 省份数量
 */

// @lc code=start
class Solution {
//dfs
// private:
//     vector<int>res;
//     int cnt = 0;
// public:
//     void dfs(int p, vector<vector<int>> v) {
//         res[p] = cnt;
//         for (int i = 0; i < v.size(); ++i) {
//             if (v[p][i] && !res[i]) {
//                 dfs(i, v);
//             }
//         }
//     }
//     int findCircleNum(vector<vector<int>>& isConnected) {
//         int n = isConnected.size();
//         res.resize(n);
//         for (int i = 0; i < n; ++i) {
//             if (!res[i]) {
//                 ++cnt;
//                 dfs(i, isConnected);
//             }
//         }
//         return cnt;
//     }
//并查集
private:
    vector<int>parent;
public:
    int Find(int index) {
        if (parent[index] != index) {
            parent[index] = Find(parent[index]);
        }
        return parent[index];
    }

    void Union(int index1, int index2) {
        parent[Find(index1)] = Find(index2);
    }

    int findCircleNum(vector<vector<int>>& isConnected) {
        int cities = isConnected.size();
        parent.resize(cities);
        for (int i = 0; i < cities; i++) {
            parent[i] = i;
        }
        for (int i = 0; i < cities; i++) {
            for (int j = i + 1; j < cities; j++) {
                if (isConnected[i][j] == 1) {
                    Union(i, j);
                }
            }
        }
        int provinces = 0;
        for (int i = 0; i < cities; i++) {
            if (parent[i] == i) {
                provinces++;
            }
        }
        return provinces;
    }
};
// @lc code=end

