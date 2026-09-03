class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int modd=INT_MAX;
        int meven=INT_MAX;
        for(int x : nums1){
            if(x%2==0){
                meven=min(meven,x);
            }
            else{
                modd=min(modd,x);
            }
        }
            if(meven==INT_MAX || modd==INT_MAX) return true;
            return modd<meven;
    }
};