class Solution:
    def isValid(self, s: str) -> bool:
        stack = []
        for i in s:
            if i in '([{':
                stack.append(i)
            elif len(stack)>0 and i in ')]}':
                if i == ')':
                    if stack[-1]=='(':
                        stack.pop()
                    else:
                        return False
                elif i == ']':
                    if stack[-1]=='[':
                        stack.pop()
                    else:
                        return False
                elif i == '}':
                    if stack[-1]=='{':
                        stack.pop()
                    else:
                        return False
            else:
                return False
        if len(stack)==0:
            return True
        else:
            return False