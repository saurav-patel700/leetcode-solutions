class Solution {
public:
    bool isPalindrome(int x) {
        while(x<0) return false;
        int temp=x;
        long long  rev=0;
        while(x>0){
            int d=x%10;
            rev=10*rev+d;
            x/=10;
        }
        return rev==temp;
    }
};