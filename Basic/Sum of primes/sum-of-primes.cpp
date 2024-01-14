//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> isprime(int n){
        vector<int>b(n+1,1);
        b[0]=0;
        b[1]=0;
        for(int i=2;i*i<n+1;i++){
            for(int j=i*i;j<n+1;j+=i){
                b[j]=0;
            }
        }
        return b;
    }
    int primeSum(int N){
        // code here
        int r=9;
        vector<int>a=isprime(r);
        int k=0;
        int l;
        int c=0;
        while(N){
            k=N%10;
            if(a[k]==1){
                c+=k;
            }
            N=N/10;
        }
        return c;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.primeSum(N)<<"\n";
    }
    return 0;
}
// } Driver Code Ends