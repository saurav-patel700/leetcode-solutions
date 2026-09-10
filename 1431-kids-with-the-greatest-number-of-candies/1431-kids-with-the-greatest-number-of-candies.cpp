class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extracandies) {
        int n=candies.size();
        vector<bool> ans(n);
        int maxc=*max_element(candies.begin(),candies.end());
        for(int i=0;i<n;i++){
            if(candies[i]+extracandies >= maxc) ans[i]=true;
            else ans[i]=false;
        }
        return ans;
    }
};