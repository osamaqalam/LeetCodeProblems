# Definition for singly-linked list.
# class ListNode:
#     def __init__(self, val=0, next=None):
#         self.val = val
#         self.next = next
class Solution:
    def addTwoNumbers(self, l1: ListNode, l2: ListNode) -> ListNode:
            num1 = self.listNodeToInt(l1)
            num2 = self.listNodeToInt(l2)
            resNum = num1 + num2
            return self.intToListNode(resNum)
            
    def listNodeToInt (self, l1: ListNode) -> int:
        i=1
        num = 0
        while l1.next is not None:
            num += i * l1.val
            i *= 10
            l1 = l1.next
        num += i * l1.val
        return num
    
    def intToListNode (self, num: int) -> ListNode:
        strNum = str(num)
        temp = ListNode(int(strNum[len(strNum)-1]))
        ans = temp     
        
        for i in range(len(strNum)-2, -1,-1):
            temp.next = ListNode(int(strNum[i]))
            temp = temp.next
        return ans
            
            
            
            
