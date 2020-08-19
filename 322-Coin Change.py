class Solution:
    firstCall = True 
    def coinChange(self, coins: List[int], amount: int) -> int:
        #bottom-up approach
        table = [-1]*(amount+1)
        table[0]=0
        
            
        for i in range(1,amount+1):
            for y in coins:
                if y <= amount:
                    table[i] = min(1+table[i-y],table[i])
                   
        return table[amount]