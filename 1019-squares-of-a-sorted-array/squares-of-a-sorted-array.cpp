class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> a;
        for(int i=0;i<nums.size();i++){
            int k=nums[i]*nums[i];
            a.push_back(k);
        }
        sort(a.begin(),a.end());
        return a;
    }
};