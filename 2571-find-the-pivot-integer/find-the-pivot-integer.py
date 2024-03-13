class Solution:
    def pivotInteger(self, n: int) -> int:
        a=[]
        for i in range(1,n+1):
            a.append(i)
        k=-1
        for i in range(n):
            if(sum(a[:i+1])==sum(a[i:])):
                k=i
                break
        if(k!=-1):
            return k+1
        else:
            return k

        