//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

/*  Function to calculate the longest consecutive ones
*   N: given input to calculate the longest consecutive ones
*/
class Solution
{
    public:
    int maxConsecutiveOnes(int n)
    {
        int ma=0; 
        int c=0;
        while(n)
        {
            if((n&1)!=0)
            {
                c=c+1;
            }
            else
            {
               if(c>=ma)
               {
                   ma=c;
               }
               c=0;
            }
            
            n=n>>1;
        }
        if(c>ma){
            ma=c;
        }
        
        return ma;
      
    }
};


//{ Driver Code Starts.

// Driver Code
int main() {
	int t;
	cin>>t;//testcases
	while(t--)
	{
		int n;
		cin>>n;//input n
		Solution obj;
		//calling maxConsecutiveOnes() function
		cout<<obj.maxConsecutiveOnes(n)<<endl;
	}
	return 0;
}
// } Driver Code Ends