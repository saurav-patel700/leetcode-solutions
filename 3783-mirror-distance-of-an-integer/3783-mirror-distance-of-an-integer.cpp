class Solution {
public:
    int mirrorDistance(int n) {
        int temp=n;
        long long rev=0;
        while(temp>0){

            int digit=temp%10;
            
            rev=rev*10+digit;
            
            temp=temp/10;
        }
        return abs((long long)n-rev);
    }
};