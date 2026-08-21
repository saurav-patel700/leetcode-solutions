class Solution {
public:
        int digitsum(int x){
            int sum=0;
            while(x>0){
                sum+=x%10;
                x/=10;
            }
            return sum;
        }
    int differenceOfSum(vector<int>& nums) {
        int n=nums.size();
        int esum=0;
        int dsum=0;
        for(int i=0;i<n;i++){
            esum+=nums[i];
            dsum+=digitsum(nums[i]);
        }
        return abs(esum-dsum);
    }
};