/*
 * @lc app=leetcode.cn id=841 lang=cpp
 *
 * [841] 钥匙和房间
 */

// @lc code=start
class Solution {
private:
    vector<bool>visited;
    int cnt = 0;
public:
    void dfs(int p, vector<vector<int>> rooms) {
        visited[p] = 1;
        ++cnt;
        for (int room : rooms[p]) {
            if (!visited[room])dfs(room, rooms);
        }
    }
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        int n = rooms.size();
        visited.resize(n);
        dfs(0, rooms);
        return cnt == n;
    }
};
// @lc code=end

