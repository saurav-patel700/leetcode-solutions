class Solution {
public:
    int xorOperation(int n, int start) {
        vector<int> nums(n);
        int ans=start;
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
        }
        for(int i=0;i<n-1;i++){
            ans=ans^nums[i+1];
        }
        return ans;
        
    }
};