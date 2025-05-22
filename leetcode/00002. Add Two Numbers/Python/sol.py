# Reccursion Based Solution
# Definition for singly-linked list.
# class ListNode(object):
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution(object):
    def addTwoNumbers(self, l1, l2):
        """
        :type l1: Optional[ListNode]
        :type l2: Optional[ListNode]
        :rtype: Optional[ListNode]
        """
        def solve(l1, l2, carry=0):
            num = 0
            if l1 != None and l2 != None:
                num = l1.val + l2.val + carry
                return ListNode(num % 10, solve(l1.next, l2.next, num / 10))
            elif l1 != None:
                num = l1.val + carry
                return  ListNode(num % 10, solve(l1.next, l2, num / 10))
            elif l2 != None:
                num = l2.val + carry
                return ListNode(num % 10, solve(l1, l2.next, num / 10))
            elif carry == 1:
                return ListNode(1)
            else:
                return None
        return solve(l1,l2)