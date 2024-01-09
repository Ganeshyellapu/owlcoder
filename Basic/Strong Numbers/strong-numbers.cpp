//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
public:
	public:
	    int fact(int k)
	    {
	        int g=0;
	        if(k==0){
	            return 1;
	        }
	        else{
	            g+=k*fact(k-1);
	        }
	        return g;
	        
	    }
		int is_StrongNumber(int n)
		{
		    int r=0;
		    int s=0;
		    int temp=n;
		    while(n){
		       r=n%10;
		       s+=fact(r);
		       n/=10;
		    }
		    if(s==temp){
		        return 1;
		    }
		    else{
		        return 0;
		    }
		}
};


//{ Driver Code Starts.
int main(){
    int T;
    cin >> T;
    while(T--)
    {
    	int n; 
    	cin >> n;
    	Solution ob;
    	int ans = ob.is_StrongNumber(n);
    	cout << ans <<"\n";
    }
	return 0;
}

// } Driver Code Ends