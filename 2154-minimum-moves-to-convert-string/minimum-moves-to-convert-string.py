class Solution:
    def minimumMoves(self, s: str) -> int:
        c=0
        i=0
        while(i<len(s)):
            if(s[i]=="O"):
                i+=1
            else:
                if(s[i:i+3].count('X')>0):
                    c+=1
                i+=3
        return c