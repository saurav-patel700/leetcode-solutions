class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        vector<pair<int,int>> v;
        for(int i=0;i<position.size();i++){
            v.push_back({position[i],speed[i]});
        }
        sort(v.rbegin(),v.rend());
        int fleets=0;
        double prevtime=0;
        for(auto x:v){
            double time=(double)(target-x.first)/x.second;
            if(time>prevtime){
                fleets++;
                prevtime=time;
            }
        }
        return fleets;
    }
};