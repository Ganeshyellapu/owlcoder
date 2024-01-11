//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<int> primeRange(int M, int N) {
        // code here
        vector<int> a;
        vector<int> b(N+1,1);
        b[0]=0;
        b[1]=0;
        for(int i=2;i*i<N+1;i++)
        {
            if(b[i]){
            for(int j=i*i;j<N+1;j+=i)
            {
                b[j]=0;
            }
            }
        }
        for(int i=M;i<=N;i++)
        {
            if(b[i]){
                a.push_back(i);
            }
        }
        return a;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, M, K;
        cin >> M >> N;
        Solution ob;
        vector<int> ans = ob.primeRange(M, N);
        for (auto u : ans) cout << u << " ";
        cout << "\n";
    }
}
// } Driver Code Ends