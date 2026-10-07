class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        next_permutation(nums.begin(),nums.end());

    }
};
// class Solution {
// public:
//     void nextPermutation(vector<int>& nums) {
//         int n=nums.size();
//         int i=n-2;
//         //pivot find kar lenge chota element from right
//         while(i>=0 && nums[i]>=nums[i+1]){
//             i--;
//         }
//         //find just greater element
//         if(i>=0){
//             int j=n-1;
//             while(nums[j]<=nums[i]){
//                 j--;
//             }
//             swap(nums[i],nums[j]);
//         }
//         //i ke baad wale ko sort kar denge 
//         reverse(nums.begin()+i+1,nums.end());
//     }
// };