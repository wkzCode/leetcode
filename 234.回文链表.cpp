/*
 * @lc app=leetcode.cn id=234 lang=cpp
 *
 * [234] 回文链表
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
    bool isPalindrome(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return 1;
        ListNode* p1 = head, * p2 = head;
        while (p2->next->next != nullptr) {
            p1 = p1->next;
            p2 = p2->next->next;
            if (!p2->next)
                break;
        }
        ListNode* t = p1->next;
        p1->next = nullptr;
        ListNode* curr = t, * pre = nullptr;
        while (curr) {
            ListNode* next = curr->next;
            curr->next = pre;
            pre = curr;
            curr = next;
        }
        while (pre != nullptr) {
            if (head->val != pre->val)
                return 0;
            head = head->next;
            pre = pre->next;
        }
        return 1;
    }
};
// @lc code=end

