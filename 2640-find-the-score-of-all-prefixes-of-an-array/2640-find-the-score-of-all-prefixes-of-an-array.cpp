class Solution {
public:
    vector<long long> findPrefixScore(vector<int>& nums) {
        int n=nums.size();
        int mx=INT_MIN;
        long long sum=0;
        vector<long long> ans;
        for(int i=0;i<n;i++){
            mx=max(mx,nums[i]);
            sum+=nums[i]+mx;
            ans.push_back(sum);
        }
        return ans;
    }
};