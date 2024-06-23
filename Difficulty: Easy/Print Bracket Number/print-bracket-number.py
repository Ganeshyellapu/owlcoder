#User function Template for python3
class Solution:
	def bracketNumbers(self, str):
		# code here
		stack=[]
		c=1
		a=[]
		for i in str:
		    if(i=='('):
		        a.append(c)
		        stack.append(c)
		        c+=1
		    if(i==')'):
		        a.append(stack.pop())
		return a


#{ 
 # Driver Code Starts
#Initial Template for Python 3

if __name__ == '__main__':
    T = int(input())
    for i in range(T):
        S = input()
        ob = Solution()
        answer = ob.bracketNumbers(S)
        for value in answer:
            print(value, end=" ")
        print()

# } Driver Code Ends