class Solution:
    def halvesAreAlike(self, s: str) -> bool:
        s=s.lower()
        k=len(s)//2
        v=['a','e','i','o','u']
        a=s[:k]
        b=s[k:]
        c=0
        for i in a:
            if(i in v):
                c+=1
        g=0
        for i in b:
            if(i in v):
                g+=1
        print(a,b)
        if(g==c):
            return True
        else:
            return False
        