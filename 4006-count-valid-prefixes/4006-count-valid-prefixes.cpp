class Solution {
public:
    int countValidPrefixes(string s) {
        int z=0,o=0;
        int ans=0;
        for(char c : s){
            if(c=='0') z++;
            else o++;
            if(abs(z-o)<=1) ans++;
        }
        return ans;
    }
};