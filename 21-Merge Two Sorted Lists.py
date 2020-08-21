# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def mergeTwoLists(self, l1: ListNode, l2: ListNode) -> ListNode:
        if l1 is None:
            return l2
        elif l2 is None:
            return l1
        
        if l1.val < l2.val:
            head = l1
            l1 = l1.next
        else:
            head = l2
            l2 = l2.next
        
        it = head
        while (l1 is not None) or (l2 is not None) :
            if l1 is None:
                it.next = l2
                break
            elif l2 is None:
                it.next = l1
                break
            elif (l1.val < l2.val):
                it.next = l1
                l1 = l1.next
                    
            else:
                it.next = l2
                l2 = l2.next
            it = it.next
            
        return head