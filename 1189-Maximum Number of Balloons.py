class Solution:
    def maxNumberOfBalloons(self, text: str) -> int:
        word = "balloon"
        table = dict()
        for i in word:
            table.setdefault(i,[0,0]) 
            table[i][0] += 1
            
        for j in text:
            if j in table:
                table[j][1] += 1
        
        count = inf
        for k in table:
            count = min(count, table[k][1]//table[k][0])
            if count == 0:
                return 0
        return count