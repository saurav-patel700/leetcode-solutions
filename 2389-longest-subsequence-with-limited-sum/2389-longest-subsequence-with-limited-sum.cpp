class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int> ans;
        for(int q:queries){
        int sum=0,count=0;
        for(int i=0;i<n;i++){
            if((sum+nums[i])<=q){
                sum+=nums[i];
                count++;
            }
            else break;
        }
        ans.push_back(count);  
    }
        return ans;
    }
};