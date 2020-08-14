class Solution:
    def findSpecialInteger(self, arr: List[int]) -> int:
        count = 1
        
        if len(arr) == 1:
            return arr[0]
        
        for i in range(1,len(arr)):
            print(arr[i], count)
            if arr[i] == arr[i-1]:
                count+=1
                if count > len(arr)/4:
                    return arr[i]
            else:
                count = 1
        return -1
            
        
        