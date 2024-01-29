class Solution {
public:
    int reverse(int x) {
        int t=x;
        x=abs(x);
        int r=0;
        long long ans=0;
        while(x){
            r=x%10;
            ans=ans*10+r;
            x=x/10;
        }
        cout<<ans;
        if(ans<INT_MAX){
            if(t<0){
            ans=ans*-1;
            cout<<ans;
            return ans;
        } 
        else{
            return ans;
        }  
        }
        else{
            ans=0;
            return ans;
        }
    }
};