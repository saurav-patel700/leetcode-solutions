
class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        int n = nums.size();
        int s = nums[0];
        int l = nums[n - 1];
        for (int i = s; i <= l; i++) {
            bool f = false;
            for (int j = 0; j < n; j++) {
                if (nums[j] == i) {
                    f = true;
                    break;
                }
            }
            if (!f) {
                ans.push_back(i);
            }
        }
        return ans;
    }
};