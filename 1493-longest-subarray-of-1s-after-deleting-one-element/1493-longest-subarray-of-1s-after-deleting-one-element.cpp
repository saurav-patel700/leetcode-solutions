class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n=nums.size();
        int zeropos=-1;
        int i=0,j=0,maxlen=0,count=0;
        while(j<n){
            int pre=zeropos;
            if(nums[j]==0){
                count++;
                zeropos=j;
            }
            if(count<=1) j++;
            else{
                maxlen=max(maxlen,j-i);
                i=pre+1;
                count--;
                j++;
            }
        }
        maxlen=max(maxlen,j-i);
        return maxlen-1;
    }
};