class Solution:
    def buddyStrings(self, A: str, B: str) -> bool:
        if len(A) < 2 or len (B) < 2:
            return False
        
        ls = list(A)
        firstDif = -1
        secondDif = -1
        DuplicatesCount = {}
        
        for i in range(len(A)):
            DuplicatesCount.setdefault(A[i],0)
            DuplicatesCount[A[i]] +=1
            if A[i] != B[i] and firstDif == -1:
                firstDif = i
            elif A[i] != B[i]:
                ls[firstDif] = A[secondDif]
                ls[secondDif] = A[firstDif]
                A = "".join(ls)
                if A == B:
                    return True
                else:
                    return False
                
        if firstDif != -1 or max(DuplicatesCount.values()) < 2:
            return False
        else:
            return True
        