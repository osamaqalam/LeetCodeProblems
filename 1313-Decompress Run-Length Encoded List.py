class Solution:
    def decompressRLElist(self, nums: List[int]) -> List[int]:
        i=0
        while i < len(nums)-1:
            freq = nums[i]
            val = nums[i+1]
            nums.pop(i)
            for j in range(freq-1):
                nums.insert(i, val)
            i += freq
        return nums
        
#  Uses extra memory
#         output = []
#         for i in range(len(nums)//2):
#             output = output + [nums[2*i+1]]*nums[2*i]
            
#         return output