class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int k=0;
        int ans=0;
        for(auto ele:mp){
            if(ele.second>k){
                k=ele.second;
                ans=ele.first;
            }
        }
        return ans;
    }
};