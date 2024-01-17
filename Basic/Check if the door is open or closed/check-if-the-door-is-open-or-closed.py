#User function Template for python3

class Solution:
    def checkDoorStatus(self, N):
        # code here
        s="100"
        if(N==1):
            return [1]
        elif(N==2):
            return [1,0]
        elif(N==3):
            return [1,0,0]
        else:
            for i in range(4,N+1):
                k=int(math.sqrt(i))
                if(k*k==i):
                    s+="1"
                else:
                    s+="0"
            return list(s)
                    
                


#{ 
 # Driver Code Starts
#Initial Template for Python 3

import math
if __name__ == '__main__': 
    t = int (input ())
    for _ in range (t):
        N=int(input())
        
        ob = Solution()
        ptr = ob.checkDoorStatus(N)
        print(*ptr)
# } Driver Code Ends