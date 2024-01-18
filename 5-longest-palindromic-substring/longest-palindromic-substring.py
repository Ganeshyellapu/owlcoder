class Solution:
    def longestPalindrome(self, s: str) -> str:
        def ispal(k):
            if(k==k[::-1]):
                return True
            else:
                return False
        if(len(s)<2):
            return s
        ss=""
        a=[]
        ff=""
        for i in range(len(s)-1):
            for j in range(i,len(s)):
                ss+=s[j]
                if(ispal(ss)):
                    a.append(ss)
            ss=""
        for g in a:
            if(len(g)>len(ff)):
                ff=g
        return ff
                
