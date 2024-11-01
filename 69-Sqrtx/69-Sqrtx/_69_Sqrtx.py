
class Solution:
    def mySqrt(self, x: int) -> int:
        i = 1
        while i*i < x:
            i += 1 

        if (i*i==x):
            return i

        return i - 1

obj =  Solution()
print(obj.mySqrt(9))