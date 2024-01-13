//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
public:
    bool res(int K){
        vector<int>a(K+1,1);
        a[0]=0;
        a[1]=0;
        for(int i=2;i*i<K+1;i++){
            if(a[i]){
            for(int j=i*i;j<K+1;j+=i){
                a[j]=0;
            }
            }
        }
        int n=K;
        for(int i=2;i<a.size()+1;i++){
            if(a[i]==1 && a[n-i]==1){
                return true;
            }
        }
        return false;
    }
    string isSumOfTwo(int N){
        // code here
        if(res(N)){
            return "Yes";
        }
        else{
            return "No";
        }
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        Solution ob;
        cout << ob.isSumOfTwo(N) << endl;
    }
    return 0;
}

// } Driver Code Ends