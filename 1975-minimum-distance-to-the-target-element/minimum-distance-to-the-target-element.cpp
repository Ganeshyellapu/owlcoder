class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int k=INT_MAX;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target){
                if(abs(i-start)<k){
                    k=abs(i-start);
                }  
            }
        }
        return k;
    }
};