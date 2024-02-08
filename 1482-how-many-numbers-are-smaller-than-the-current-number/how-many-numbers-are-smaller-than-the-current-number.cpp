class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a;
        for(int i=0;i<nums.size();i++){
            int c=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    c+=1;
                }
            }
            a.push_back(c);
        }
        return a;
    }
};