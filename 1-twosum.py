class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        for i in range(len(nums)):
            try:
                second = target - nums[i] #term to be searched for
                if i != 0:
                    secondIndex = nums.index(second, 0, i-1)
                    return [i, secondIndex]
                else:
                    raise ValueError
                  
            except ValueError:
                try:
                    secondIndex = nums.index(second, i+1, len(nums))
                    return [i, secondIndex]
                except ValueError:
                    pass
