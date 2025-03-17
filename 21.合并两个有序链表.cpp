/*
 * @lc app=leetcode.cn id=21 lang=cpp
 *
 * [21] 合并两个有序链表
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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* nlist = new ListNode();
        if (list1 == nullptr && list2 == nullptr)
            return nullptr;
        else if (list1 == nullptr)
            return list2;
        else if (list2 == nullptr)
            return list1;
        if (list1->val > list2->val) {
            nlist->val = list2->val;
            list2 = list2->next;
        } else {
            nlist->val = list1->val;
            list1 = list1->next;
        }
        ListNode* s = nlist;
        while (list1 != nullptr && list2 != nullptr) {
            ListNode* p = new ListNode();
            if (list1->val > list2->val) {
                p->val = list2->val;
                list2 = list2->next;
            } else {
                p->val = list1->val;
                list1 = list1->next;
            }
            s->next = p;
            p = p->next;
            s = s->next;
        }
        if (list1 != nullptr) {
            s->next = list1;
        } else if (list2 != nullptr) {
            s->next = list2;
        }
        return nlist;
    }
};
// @lc code=end
