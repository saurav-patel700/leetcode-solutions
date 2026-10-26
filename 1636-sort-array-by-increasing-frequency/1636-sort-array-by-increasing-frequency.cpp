class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int,int> mp;
        for(int num: nums){
            mp[num]++;
        }
        vector<pair<int,int>> v;
        for(auto x : mp){
            v.push_back({x.second,x.first});
        }
        sort(v.begin(),v.end(),[](auto a,auto b){
            if(a.first==b.first) return a.second>b.second;
            return a.first<b.first;
        });
        vector<int> ans;
        for(auto x : v){
            while(x.first>0){
                ans.push_back(x.second);
                x.first--;
            }
        }
        return ans;
    }
};