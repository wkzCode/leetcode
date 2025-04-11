/*
 * @lc app=leetcode.cn id=2843 lang=cpp
 *
 * [2843] 统计对称整数的数目
 */

// @lc code=start
class Solution {
public:
    int countSymmetricIntegers(int low, int high) {
        int count = 0;
        for (int i = low;i <= high;++i) {
            string s = to_string(i);
            int len = s.length();
            if (len % 2 == 0) {
                int mid = len / 2;
                int sum1 = 0;
                for (int j = 0;j < mid;++j) {
                    sum1 += s[j] - '0';
                }
                for (int j = mid;j < len;++j) {
                    sum1 -= s[j] - '0';
                }
                if (!sum1) {
                    ++count;
                }
            }
        }
        return count;
    }
};
// @lc code=end

