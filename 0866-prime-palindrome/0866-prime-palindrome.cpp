class Solution {
public:
    bool isPrime(int n) {
        if (n < 2) return false;
        for (int i = 2; i * i <= n; i++) {
            if (n % i == 0)
                return false;
        }
        return true;
    }
    bool isPalindrome(int n) {
        string s=to_string(n);
        string rev=s;
        reverse(rev.begin(),rev.end());
        return s == rev;
    }
    int primePalindrome(int n) {
        if(n<=11){
            for(int i=n; ;i++){
                if(isPrime(i) && isPalindrome(i)) return i;
            }
        }
       while(true){
        string s=to_string(n);
        if(s.length()%2==0 && n!=11){
            n=pow(10,s.length());
            continue;
        }
        if(isPrime(n) && isPalindrome(n)){
            return n;
        }
        n++;
       }
    }
};