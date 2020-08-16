class Solution:
    def removeDuplicates(self, nums: List[int]) -> int:
        
        uniqueIndex = 0 
        for i in range(1,len(nums)):
            if nums[i] != nums [uniqueIndex]:
                uniqueIndex += 1
                nums[uniqueIndex] = nums[i]
        del(nums[uniqueIndex+1:len(nums)])   
        """
        # Solution2: doesn't remove duplicates in place
        setList = sorted(set(nums))
        
        for i in range(len(setList)):
            nums[i] = setList[i]
            
        if len(setList)!=len(nums): 
            del nums[len(setList)-len(nums):]
        """
        
        
