/*
 * @lc app=leetcode.cn id=2829 lang=cpp
 *
 * [2829] k-avoiding 数组的最小总和
 */

 // @lc code=start
class Solution {
public:
    int minimumSum(int n, int k) {
        if (n == 1)return 1;
        if (n <= k / 2)return n * (n + 1) / 2;
        int ans = k / 2 * (k / 2 + 1) / 2;
        int cnt = 0, p = k;
        while (cnt++ < n - k / 2) {
            ans += p++;
        }
        return ans;
        // unordered_set<int> us;
        // int cnt = 0, num = 1, sum = 0;
        // while (cnt < n) {
        //     if (us.find(k - num) == us.end()) {
        //         us.insert(num);
        //         sum += num;
        //         ++num;
        //         ++cnt;
        //     } else {
        //         ++num;
        //     }
        //     if (num >= k)break;
        // }
        // while (cnt++ < n) {
        //     sum += num;
        //     ++num;
        // }
        // return sum;
    }
};
// @lc code=end

