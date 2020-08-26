# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def reorderList(self, head: ListNode) -> None:
        """
        Do not return anything, modify head in-place instead.
        """
        if head is None:
            return head
        
        nums = [head.val]
        it = head
        while it.next is not None:
            it = it.next
            nums.append(it.val)
        
        it = head
        j = 0
        for i in range(len(nums)):
            if i%2 == 0:
                it.val = nums[j]
                j+=1
            else:
                it.val = nums[-j]
            it = it.next
        return head