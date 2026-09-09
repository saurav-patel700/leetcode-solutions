class Solution {
public:
    int signFunc(vector<int>& nums){
        int count=1;
        int n=nums.size();
        for(int i=0;i<n;i++){
        if(nums[i]>0) count*=1;
        else if(nums[i]<0) count*=-1;
        else count*=0;
        }
        return count;
    }
    int arraySign(vector<int>& nums) {
        return signFunc(nums);
    }
};