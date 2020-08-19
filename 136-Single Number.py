class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        nums[:]=sorted (nums)
        while len(nums)>1 and nums[0] == nums[1]:
            del (nums[0:2])
        return nums[0]