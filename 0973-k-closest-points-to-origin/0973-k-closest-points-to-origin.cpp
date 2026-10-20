class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<pair<int,int>> v;
        for(int i=0;i<points.size();i++){
            int x=points[i][0];
            int y=points[i][1];
            int d=x*x+y*y;
            v.push_back({d,i});
        }
        sort(v.begin(),v.end());
        vector<vector<int>> ans;
        for(int i=0;i<k;i++){
            ans.push_back(points[v[i].second]);
        }
        return ans;
    }
};