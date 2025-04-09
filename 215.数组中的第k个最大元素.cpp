/*
 * @lc app=leetcode.cn id=215 lang=cpp
 *
 * [215] 数组中的第K个最大元素
 */

 // @lc code=start
class Solution {
public:
    void maxHeap(vector<int>& nums, int len, int pos) {
        int left = pos * 2 + 1, right = pos * 2 + 2, t = pos;
        if (left < len && nums[left] > nums[t]) {
            t = left;
        }
        if (right < len && nums[right] > nums[t]) {
            t = right;
        }
        if (t == pos)
            return;
        swap(nums[pos], nums[t]);
        maxHeap(nums, len, t);
    }

    void buildMaxHeap(vector<int>& nums) {
        int n = nums.size();
        for (int i = n / 2 - 1; i >= 0; --i) {
            maxHeap(nums, n, i);
        }
    }

    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        buildMaxHeap(nums);
        for (int i = 0; i < k - 1; ++i) {
            swap(nums[0], nums[n - i - 1]);
            maxHeap(nums, n - i - 1, 0);
        }
        return nums[0];
    }
};
// @lc code=end

