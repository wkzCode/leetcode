/*
 * @lc app=leetcode.cn id=142 lang=cpp
 *
 * [142] 环形链表 II
 */

 // @lc code=start
 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     ListNode *next;
  *     ListNode(int x) : val(x), next(NULL) {}
  * };
  */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* p = head;
        unordered_set<ListNode*> us;
        while (p != nullptr) {
            auto it = us.insert(p);
            if (!it.second) return p;
            p = p->next;
        }
        return nullptr;
    }
};
// @lc code=end

