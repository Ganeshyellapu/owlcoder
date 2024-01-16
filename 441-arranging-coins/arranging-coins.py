class Solution(object):
    def arrangeCoins(self, n):
        c=0
        i=1
        while(n>=i):
            c+=1
            n-=i
            i+=1
        return c

        