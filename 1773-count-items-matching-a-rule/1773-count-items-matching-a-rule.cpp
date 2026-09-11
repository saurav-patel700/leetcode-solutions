class Solution {
public:
    int countMatches(vector<vector<string>>& items, string rulekey, string ruleValue) {
        int idx;
        if(rulekey=="type") idx=0;
        else if(rulekey=="color") idx=1;
        else idx=2;
        int count=0;
        for(int i=0;i<items.size();i++){
            if(items[i][idx]==ruleValue) count++;
        }
        return count;
    }
};