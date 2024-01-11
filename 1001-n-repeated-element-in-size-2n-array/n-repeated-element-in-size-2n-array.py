class Solution:
    def repeatedNTimes(self, nums: List[int]) -> int:
        k=len(nums)//2
        for i in nums:
            if(nums.count(i)==k):
                return i
        