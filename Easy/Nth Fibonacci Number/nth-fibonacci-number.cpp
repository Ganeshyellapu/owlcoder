//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    int nthFibonacci(int n){
        // code here
        long long mod=1e9+7;
        int n1=0;
        int n2=1;
        int n3;
        while(n-1){
            n3=(n1+n2)%mod;
            n1=n2;
            n2=n3;
            n-=1;
        }
        return n3;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends