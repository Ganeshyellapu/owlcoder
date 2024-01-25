class Solution:
    def checkRecord(self, s: str) -> bool:
        for i in range(len(s)-2):
            print(s[i:i+3])
            if(s[i:i+3]=="LLL"):
                return False
        if(s.count("A")>1):
            return False
        return True