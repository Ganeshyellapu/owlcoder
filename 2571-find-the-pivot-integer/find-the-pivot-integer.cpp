class Solution {
public:
    int pivotInteger(int n) {
        vector<int>a;
        for(int i=1;i<=n;i++){
            a.push_back(i);
        }
        for(int i=0;i<a.size();i++){
            int lt=0,rt=0;
            for(int j=0;j<i;j++){
                lt+=a[j];
            }
            for(int j=i+1;j<a.size();j++){
                rt+=a[j];
            }
            if(lt==rt){
                return i+1;
            }
        }
        return -1;
    }
};