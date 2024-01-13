class Solution(object):
    def addToArrayForm(self, num, k):
        """
        :type num: List[int]
        :type k: int
        :rtype: List[int]
        """
        s=""
        a=[]
        for i in num:
            s+=str(i)
        l=int(s)
        g=l+k
        g=str(g)
        for i in g:
            a.append(int(i))
        return a
        