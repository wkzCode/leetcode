/*
 * @lc app=leetcode.cn id=2614 lang=cpp
 *
 * [2614] 对角线上的质数
 */

 // @lc code=start
class Solution {
public:
    bool func(int n) {
        for (int i = 2; i <= sqrt(n); ++i) {
            if (n % i == 0)return 0;
        }
        return 1;
    }
    int diagonalPrime(vector<vector<int>>& nums) {
        int n = nums.size();
        vector<int> v;
        for (int i = 0; i < n; i++) {
            v.push_back(nums[i][i]);
            v.push_back(nums[i][n - i - 1]);
        }
        sort(v.begin(), v.end(), greater<int>());
        int len = v.size();
        for (int i = 0; i < len; i++) {
            if (v[i] > 1 && func(v[i])) {
                return v[i];
            }
        }
        return 0;
    }
};
// @lc code=end

