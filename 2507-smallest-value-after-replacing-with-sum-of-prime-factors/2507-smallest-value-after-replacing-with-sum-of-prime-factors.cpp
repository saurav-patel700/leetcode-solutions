class Solution {
public:
    int smallestValue(int n) {
        while(true){
            int sum=addprime(n);
            if(sum>=n) return n;
            n=sum;
        }
    }
    int addprime(int n){
        int sum=0;
        int temp=n;
        for(int i=2;i*i<=temp;i++){
            while(n%i==0){
                sum=sum+i;
                n=n/i;
            }
        }
        if(n>1) sum+=n;
        return sum;
    }
};