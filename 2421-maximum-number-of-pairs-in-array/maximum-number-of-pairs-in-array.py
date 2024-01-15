class Solution(object):
    def numberOfPairs(self, nums):
        l=set(nums)
        c=0
        k=0
        a=[]
        for i in l:
            c+=nums.count(i)//2
            k+=nums.count(i)%2
        a.append(c)
        a.append(k)
        return a
        

        