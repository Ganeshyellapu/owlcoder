class Solution:
    def climbStairs(self, n: int) -> int:
        if(n<2):
            return 1
        n1=1
        n2=1
        n3=n1+n2
        for i in range(1,n):
            n3=n1+n2
            n1=n2
            n2=n3
        return n3
        