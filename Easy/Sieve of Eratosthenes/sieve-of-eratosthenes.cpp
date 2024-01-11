//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++
class Solution
{
public:
    vector<int> isp(int n){
        vector<int>b(n+1,1);
        b[0]=0;
        b[1]=0;
        for(int i=2;i*i<=n;i++){
            for(int j=i*i;j<=n;j+=i){
                b[j]=0;
            }
        }
        return b;
    }
    vector<int> sieveOfEratosthenes(int N)
    {
        // Write Your Code here
        vector<int> v1;        
        vector<int>a=isp(N);
        for(int i=0;i<a.size();i++){
            if(a[i]==1){
                v1.push_back(i);
            }
        }
        return v1;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin>>N;
        Solution ob;
        vector<int> primes  = ob.sieveOfEratosthenes(N);
        for(auto prime : primes) {
            cout<< prime <<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends