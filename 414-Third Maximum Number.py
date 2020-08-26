class Solution:
    def thirdMax(self, nums: List[int]) -> int:
        setNums=sorted(set(nums),reverse=True)
        return setNums[2] if len(setNums)>=3 else setNums[0]