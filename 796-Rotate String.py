class Solution:
    def rotateString(self, A: str, B: str) -> bool:   
        if len (A) != len (B):
            return False
        elif len (A) == 0:
            return True
        else:
            for i in range(0,len(A)): 
                shifted = A[i:] + A[:i]
                if shifted == B:
                    return True
            return False