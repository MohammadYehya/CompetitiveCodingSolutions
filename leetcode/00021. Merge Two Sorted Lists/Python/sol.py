# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, list1: Optional[ListNode], list2: Optional[ListNode]) -> Optional[ListNode]:
        list3 = ListNode()
        Head = list3
        while(list1 is not None and list2 is not None):
            if(list1.val < list2.val):
                list3.next = list1
                list1 = list1.next
            else:
                list3.next = list2
                list2 = list2.next
            list3 = list3.next
        if (list1 is not None):
            list3.next = list1
        if (list2 is not None):
            list3.next = list2
        return Head.next