/*
 * @lc app=leetcode.cn id=19 lang=cpp
 *
 * [19] 删除链表的倒数第 N 个结点
 */

 // @lc code=start
 /**
  * Definition for singly-linked list.
  * struct ListNode {
  *     int val;
  *     ListNode *next;
  *     ListNode() : val(0), next(nullptr) {}
  *     ListNode(int x) : val(x), next(nullptr) {}
  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
  * };
  */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        vector<ListNode*> v;
        ListNode* p = head;
        while (p != nullptr) {
            v.emplace_back(p);
            p = p->next;
        }
        int len = v.size();
        if (len - n - 1 < 0) {
            head = head->next;
        } else if (n < 2) {
            v[len - n - 1]->next = nullptr;
        } else {
            v[len - n - 1]->next = v[len - n + 1];
        }
        return head;
    }
};
// @lc code=end

