class Solution {
public:
    int maximumWealth(vector<vector<int>>& nums) {
        int n=nums.size();
        int maxsum=0;
        for(int i=0;i<n;i++){
            int sum=0;
            for(int j=0;j<nums[i].size();j++){
                sum+=nums[i][j];
            }
            maxsum=max(sum,maxsum);
        }
        return maxsum;
    }
};