class Solution:
    def maxSubArray(self, nums: List[int]) -> int:
        # Kadane's Algorithm
        subArrays = [[nums[0]]]
        maxSubArray = nums[0]
        for i in range(1,len(nums)):
           
            if nums[i] >= sum(subArrays[i-1], nums[i]):
                subArrays.append([nums[i]])
            else:
                subArrays.append(subArrays[i-1])
                subArrays[len(subArrays)-1].append(nums[i])
            maxSubArray = max (maxSubArray, sum(subArrays[i]))
        print(subArrays)
        return maxSubArray
        