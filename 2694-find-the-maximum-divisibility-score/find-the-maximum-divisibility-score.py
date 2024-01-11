class Solution:
    def maxDivScore(self, nums: List[int], divisors: List[int]) -> int:
        dl=len(divisors)
        nl=len(nums)
        k=[]
        for i in range(dl):
            c=0
            for j in range(nl):
                if(nums[j]%divisors[i]==0):
                    c+=1
            k.append(c)
        print(k)
        g=0
        if(k.count(k[0])==len(k)):
            return min(divisors)
        else:
            l=max(k)
            g=[]
            for i in range(len(k)):
                if(l==k[i]):
                    g.append(divisors[i])
            return min(g)


        

        