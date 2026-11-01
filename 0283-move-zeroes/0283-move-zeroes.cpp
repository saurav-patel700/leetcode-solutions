class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int noz=0;
        vector<int> v;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]!=0) v.push_back(nums[i]);
            else noz++;  
    }
    for(int i=1;i<=noz;i++){
        v.push_back(0);
    }
    for(int i=0;i<n;i++){
        nums[i]=v[i];
    }
    }
};