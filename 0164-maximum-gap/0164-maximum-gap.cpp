class Solution {
public:
    int maximumGap(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=1;i<nums.size();i++){
            int d=nums[i]-nums[i-1];
            ans=max(ans,d);
        }
        return ans;
    }
};