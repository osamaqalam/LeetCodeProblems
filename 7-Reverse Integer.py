class Solution:
    def reverse(self, x: int) -> int:
        strNum = self.reverseStr(str(abs(x)))
        if int(strNum)<=2147483647:
            if x >= 0:
                return int(strNum)
            else:
                return -1*int(strNum)
        else:
            return 0
    
    def reverseStr(self, x: str) -> str:
        if len(x) == 1:
            return x
        return x[-1] + self.reverseStr(x[0:len(x)-1])
