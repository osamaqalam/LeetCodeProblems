class Solution:
    def lengthOfLastWord(self, s: str) -> int:
        length, x = 0, len(s)
        
        for i in range(x-1,-1,-1):
            if s[i] != " ":
                length += 1
            elif length != 0:
                return length
        return length

# Longer runtime solution by splitting the string
#         ls = s.split()
#         if len(ls) == 0:
#             return 0
        
#         return len(ls[-1])