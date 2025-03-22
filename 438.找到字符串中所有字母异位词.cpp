/*
 * @lc app=leetcode.cn id=438 lang=cpp
 *
 * [438] 找到字符串中所有字母异位词
 */

 // @lc code=start
class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = s.size(), len = p.size(), l = 0;
        if (len > n)return vector<int>();
        vector<int> v1(26, 0), v2(26, 0), res;
        for (int i = 0; i < len; ++i) {
            ++v1[p[i] - 97];
            ++v2[s[i] - 97];
        }
        while (l + len <= n) {
            if (v1 == v2) {
                res.emplace_back(l);
            }
            --v2[s[l] - 97];
            if (l + len < n) {
                ++v2[s[l + len] - 97];
            }
            ++l;
        }
        return res;
    }
};
// @lc code=end

