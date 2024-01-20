class Solution:
    
    def canSortArray(self, nums: List[int]) -> bool:
        def ctb(k):
            ct=0
            while(k):
                if(k&1):
                    ct+=1
                k=k>>1
            return ct
        d={}
        for i in range(len(nums)):
            d[nums[i]]=ctb(nums[i])
        for i in range(len(nums)):
            for j in range(1,len(nums)):
                if(nums[j]<nums[j-1]):
                    if(d[nums[j]]!=d[nums[j-1]]):
                        return False
                    nums[j],nums[j-1]=nums[j-1],nums[j]
        return True