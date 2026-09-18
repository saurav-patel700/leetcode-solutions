class Solution {
public:
    int digsum(int n){
        int sum=0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        return sum;
    }
    int addDigits(int num) {
        int sum=digsum(num);
        while(sum>9) sum=digsum(sum);
        return sum;
    }
};