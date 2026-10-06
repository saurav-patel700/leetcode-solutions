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
        int low=0,mid=0,high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
                swap(nums[low],nums[mid]);
                low++,mid++;
            }
            else if(nums[mid]==1) mid++;
            else{
                swap(nums[mid],nums[high]);
                high--;
            }
        }
    }
};