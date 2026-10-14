class Solution {
public:
    int strStr(string s, string needle) {
        int m=s.size();
        int n=needle.size();
        for(int i=0;i<=m-n;i++){
            int j=0;
            while(j<n && s[i+j]==needle[j]){
                j++;
            }
            if(j==n) return i;
        }
        return -1;
    }
};