/*
 * @lc app=leetcode.cn id=24 lang=cpp
 *
 * [24] 两两交换链表中的节点
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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr)return head;
        if (head->next == nullptr)return head;
        ListNode* p = head, * q = head->next;
        ListNode* t1 = q->next, * t2 = nullptr;
        ListNode* nhead = nullptr;
        while (q) {
            q->next = p;
            p->next = t1;
            if (nhead) {
                t2->next = q;
            }
            t2 = p;
            if (!nhead) {
                nhead = q;
            }
            p = p->next;
            if (p) {
                q = p->next;
                if (q) {
                    t1 = q->next;
                } else break;
            } else break;

        }
        return nhead;
    }
};
// @lc code=end

