class Solution {
public:
    int minMoves(vector<int>& nums) {
        int mini=*min_element(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            int diff=nums[i]-mini;
            ans=ans+diff;
        }
        return ans;
    }
};