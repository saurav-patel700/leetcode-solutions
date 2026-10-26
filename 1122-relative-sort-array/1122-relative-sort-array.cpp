class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        unordered_map<int,int> mp;
        for(int x: arr1){
            mp[x]++;
        }
        vector<int> result;
        for(int x: arr2){
            while(mp[x]>0){
            result.push_back(x);
            mp[x]--;
            }
        }
        vector<int> rem;
        for(int x:arr1){
            if(mp[x]>0){
                rem.push_back(x);
                mp[x]--;
            }
        }
        sort(rem.begin(),rem.end());
        for(int x:rem){
            result.push_back(x);
        }
        return result;
    }
};