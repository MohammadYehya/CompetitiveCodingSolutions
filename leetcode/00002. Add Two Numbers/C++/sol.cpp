// Reccursion Based Solution
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
    ListNode* solve(ListNode* l1, ListNode* l2, int carry = 0)
    {
        int num = 0;
        if (l1 != nullptr && l2 != nullptr)
        {
            num = l1->val + l2->val + carry;
            return new ListNode(num%10, solve(l1->next, l2->next, num/10));
        }
        else if (l1 != nullptr)
        {
            num = l1->val + carry;
            return new ListNode(num%10, solve(l1->next, l2, num/10));
        }
        else if (l2 != nullptr)
        {
            num = l2->val + carry;
            return new ListNode(num%10, solve(l1, l2->next, num/10));
        }
        else if (carry == 1)
            return new ListNode(1);
        else return nullptr;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return solve(l1,l2);
    }
};