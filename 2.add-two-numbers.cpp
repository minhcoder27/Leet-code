/*
 * @lc app=leetcode id=2 lang=cpp
 *
 * [2] Add Two Numbers
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *res = new ListNode(0);
        ListNode *cur = res;
        int bonus = 0;
        while(true){
            int sum = bonus;
            if (l1) sum +=l1->val;
            if (l2) sum +=l2->val;
            cur->val = sum%10;
            bonus = sum/10;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;

            if (!l1 && !l2 && !bonus) break;
            ListNode *trash = new ListNode(0);
            cur->next = trash;
            cur = trash;
        }
        return res;
    }
};
// @lc code=end

