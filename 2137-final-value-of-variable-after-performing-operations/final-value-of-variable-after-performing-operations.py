class Solution:
    def finalValueAfterOperations(self, operations: List[str]) -> int:
        m1="--X"
        m2="X--"
        p="++X"
        p2="X++"
        c=0
        for i in operations:
            if(i==m1 or i==m2):
                c-=1
            else:
                c+=1
        return c
        