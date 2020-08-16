class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        # Solution1: 128ms
        
        nums.sort() 
        
        if len(nums) == 1:
            return False
        
        for i in range(1,len(nums)):
            if nums[i] == nums[i-1]:
                return True
         
        # Solution2: time limit exceeded
        """
        d = []
        for i in nums:
            if i in d:
                return True
            else:
                d.append(i)
                
        return False
        """