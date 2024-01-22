class Solution:
    def findErrorNums(self, nums: List[int]) -> List[int]:
        k=len(nums)
        l=(k*(k+1))//2
        n=set(nums)
        s=sum(n)
        g=l-s
        d={}
        a=[]
        for i in nums:
            if(i in d):
                d[i]+=1
            else:
                d[i]=1
        for ele in d:
            if(d[ele]==2):
                a.append(ele)
        a.append(g)
        return a

        