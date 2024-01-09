//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    bool sb(int i,unsigned X)
    {
        if((1<<(i-1)&X)){
            return true;
        }
        else{
            return false;
        }
    }
    long long reversedBits(long long X) {
        // code here
        unsigned ans=0;
        for(int  i=0;i<32;i++)
        {
            if(sb(i,X))
            {
                ans=(1<<(32-i)) |ans;
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends