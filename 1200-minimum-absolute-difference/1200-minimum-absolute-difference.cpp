class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int diff=INT_MAX;
        int d=0;
        vector<vector<int>> ans;
        for(int i=0;i<n-1;i++){
            d=abs(nums[i]-nums[i+1]);
            if(d<diff){
                diff=d;
                ans.clear();
                ans.push_back({nums[i],nums[i+1]});
            }
            else if(d==diff){
                ans.push_back({nums[i],nums[i+1]});
            }
        }
        return ans;
    }
};