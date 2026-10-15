class Solution {
public:
    int findKthPositive(vector<int>& nums, int k) {
        int i=0;
        int num=1;
        while(i<nums.size()){
            if(nums[i]==num) i++;
            else k--;
            if(k==0) return num;
            num++;
        }
        return num+k-1;
    }
};