class Solution:
    def toGoatLatin(self, S: str) -> str:
        words = S.split()
        ans = ""
        for i in range(len(words)):
            if (words[i][0].lower() not in "aeiou"):
                words[i] = words[i][1:len(words[i])] + words[i][0]
            words[i] = words[i]+"ma"+"a"*(i+1)
            ans += words[i] + " " 
            
        ans = ans [0:len(ans)-1]
        return (ans)