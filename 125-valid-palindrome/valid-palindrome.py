class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=s.lower()
        ss=""
        for i in s:
            if((ord(i)>96 and ord(i)<123)or(ord(i)>47 and ord(i)<58)):
                ss+=i
        if(ss==ss[::-1]):
            return True
        else:
            return False
        