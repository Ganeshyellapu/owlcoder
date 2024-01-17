class Solution(object):
    def uniqueOccurrences(self, arr):
        d={}
        g=set(arr)
        a=[]
        for i in arr:
            if i in d:
                d[i]+=1
            else:
                d[i]=1
        k=0
        l=0
        for ele in d:
            if(d[ele] in a):
                return False
            else:
                a.append(d[ele])
                l+=1
        if(l==len(g)):
            return True