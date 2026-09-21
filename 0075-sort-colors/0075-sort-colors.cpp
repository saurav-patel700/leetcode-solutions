// class Solution {
// public:
//     void sortColors(vector<int>& nums) {
//         int n = nums.size();
//         int noz=0,noo=0,notw=0;
//         for(int i=0;i<n;i++){
//             if(nums[i]==0) noz++;
//            else if(nums[i]==1) noo++;
//             else notw++;
//         }
//         for(int i=0;i<n;i++){
//             if(i<noz) nums[i]=0;
//             else if(i<(noz+noo)) nums[i]=1;
//             else nums[i]=2;
//         }
//     }
// };
class Solution {
public:
    void sortColors(vector<int>& nums) {
        int i=0,j=0,k=nums.size()-1;
        while(j<=k){
            if(nums[j]==0){
                swap(nums[i],nums[j]);
                i++,j++;
            }
            else if(nums[j]==1) j++;
            else{
                swap(nums[j],nums[k]);
                k--;
            }
        }
    }
};