//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution {
public:
    vector<int> factorial(int N){
        // code here
        int i=0;
        int k=1;
        int cr=0;
        int pr;
        vector<int> a(1000001);
        vector<int> b;
        a[0]=1;
        while(k<=N){
            for(int j=0;j<=i;j++){
                pr=a[j]*k+cr;
                a[j]=pr%10;
                cr=pr/10;
            }
            if(cr>0)
            {
                while(cr)
                {
                    i++;
                    a[i]=cr%10;
                    cr=cr/10;
                }
            }
            k+=1;
        }
        for(int k=i;k>=0;k--)
        {
            b.push_back(a[k]);
        }
        return b;
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
        vector<int> result = ob.factorial(N);
        for (int i = 0; i < result.size(); ++i){
            cout<< result[i];
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends