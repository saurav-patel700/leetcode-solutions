class Solution {
public:
    vector<string> findRelativeRanks(vector<int>& score) {
        int n=score.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({score[i],i});
        }
        sort(v.rbegin(),v.rend());
        vector<string> result(n);
        for(int i=0;i<n;i++){
            if(i==0) result[v[0].second]="Gold Medal";
            else if(i==1) result[v[1].second]="Silver Medal";
            else if(i==2) result[v[2].second]="Bronze Medal";
            else result[v[i].second]=to_string(i+1);
        }
        return result;
    }
};