class Solution:
    def restoreString(self, s: str, indices: List[int]) -> str:
        length = len(indices)
        org = s
        s = list (s)
        for i in range(0, length):
            s[ indices[i] ] = org[i]
            
        return "".join(s)