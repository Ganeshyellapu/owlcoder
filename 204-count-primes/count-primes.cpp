class Solution {
public:
    int countPrimes(int n) {
        vector<bool>b(n+1,true);
        b[0]=b[1]=false;
        for(int i=2;i*i<=n;i++){
            if(b[i]){
                for(int j=i*i;j<=n;j+=i){
                b[j]=false;
                }
            }
        }
        int c=0;
        for(int i=2;i<n;i++){
            if(b[i]){
                c+=1;
            }
        }
        return c;
    }
};