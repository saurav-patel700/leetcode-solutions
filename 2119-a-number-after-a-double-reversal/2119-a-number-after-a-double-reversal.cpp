class Solution {
public:
int rev(int num){
            int rev=0;
            while(num>0){
            int d=num%10;
            rev=rev*10+d;
            num/=10;
        }
        return rev;
}
    bool isSameAfterReversals(int num) {
        int temp=num;
        int rev1=rev(num);
        int rev2=rev(rev1);
        if(temp==rev2) return true;
        else return false;
    }
};