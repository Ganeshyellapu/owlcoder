//{ Driver Code Starts
//Initial template for c++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    long long int power(int a, long long int b) { 
        //complete the function here
        long c=1e9+7;
        long long int ans=1;
        while(b){
            if(b&1){
                b=b-1;
                ans=((ans%c)*(a%c))%c;
            }
            else{
                b=b/2;
                a=((a%c)*(a%c))%c;
            }
        }
        return ans%c;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int a;
        long long b;
        cin >> a >> b;
        Solution ob;
        cout << ob.power(a, b) << endl;
    
    }
    return 0; 
} 



// } Driver Code Ends